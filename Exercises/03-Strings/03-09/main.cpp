// main.cpp
//
// Write a function removeDoubledLetters(str) that returns a new string in which any
// duplicated characters in str have been replaced by a single copy.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 9
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <string>
#include <cctype>
#include "error.h"
#include "console.h"

using namespace std;

string removeDoubledLetters(string str);

int main() {

    cout << removeDoubledLetters("bookkeeper") << endl;
    cout << removeDoubledLetters("committee") << endl;

    return 0;
}

string removeDoubledLetters(string str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (str.at(i) == str.at(i + 1)) {
            str.erase(i + 1, 1);
        }
    }
    return str;
}

