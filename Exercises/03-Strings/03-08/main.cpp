// main.cpp
//
// Modify your solution to exercise 7 so that, instead of using a function that returns
// a new string, you define a function removeCharactersInPlace that removes the letters
// from the string passed as the first argument.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 8
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

void removeCharactersInPlace(string& str, string remove);

int main() {
    string line = "counterrevolutionaries";

    cout << line << endl;
    removeCharactersInPlace(line, "aeiou");


    cout << line << endl;

    return 0;
}

// This is an inefficient solution but I'm too lazy for hash maps RN
void removeCharactersInPlace(string& str, string remove) {
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < remove.length(); j++) {
            if (str.at(i) == remove.at(j)) {
                str.erase(i, 1);
                i--; // to roll back after removing an element with a certain index
            }
        }
    }
}

