// main.cpp
//
// Implement the function `endsWith(str,suffix)`, which returns true if str ends with suffix.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 1
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <string>
#include <cctype>
#include "console.h"

using namespace std;

bool stringEndsWith(string str, string suffix);
bool stringEndsWith(string str, char suffix);

int main() {

    cout << stringEndsWith("Hesham", 'm') << endl;

    return 0;
}

bool stringEndsWith(string str, string suffix) {
    if (suffix.length() > str.length()) return false;

    for (int i = suffix.length() - 1; i >= 0; i--) {
        if (suffix.at(i) != str.at(i + str.length() - suffix.length())) return false;
    }
    return true;
}

bool stringEndsWith(string str, char suffix) {
    if (str.length() < 1) return false;
    return str.at(str.length() - 1) == suffix;
}
