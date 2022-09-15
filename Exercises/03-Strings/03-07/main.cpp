// main.cpp
//
// Write a function that returns a new string consisting of the characters in str after
// removing all instances of the characters in remove.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 7
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

string removeCharacters(string str, string remove);

int main() {

    cout << removeCharacters("counterrevolutionaries", "aeiou") << endl;

    return 0;
}

// This is an inefficient solution but I'm too lazy for hash maps RN
string removeCharacters(string str, string remove) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        char current = str.at(i);
        bool found = false;
        for (int j = 0; j < remove.length(); j++) {
            if (current == remove.at(j)) {
                found = true;
            }
        }
        if (!found) result += current;
    }
    return result;
}

