// main.cpp
//
// Implement the function `trim(str)`, which returns a new string formed by removing
// all whitespace characters from the beginning and end of str.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 2
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

string stringTrim(string str);

int main() {
    cout << "x" <<  stringTrim(" xxxxxxx  ") << "x" << endl;
    return 0;
}

string stringTrim(string str) {
    while (isspace(str.at(0))) str = str.substr(1);
    while (isspace(str.at(str.length() - 1))) str = str.substr(0, str.length() - 1);
    return str;
}
