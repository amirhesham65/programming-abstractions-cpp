// main.cpp
//
// Implement a function capitalize(str) that returns a string in which the initial character
// is capitalized (if it is a letter) and all other letters are converted to lower case.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 4
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

string capitalize(string str);

int main() {
    cout << capitalize("boolean") << endl;
    cout << capitalize("BOOLEAN") << endl;
    return 0;
}

string capitalize(string str) {
    str.at(0) = isalpha(str.at(0)) ? toupper(str.at(0)) : str.at(0);

    for (int i = 1; i < str.length(); i++) {
        str.at(i) = isalpha(str.at(i)) ? tolower(str.at(i)) : str.at(i);
    }

    return str;
}
