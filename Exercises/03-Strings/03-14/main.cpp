// main.cpp
//
// Write a function that takes a string of decimal digits representing a number and
// returns the string formed by inserting commas at every third position, starting on the right.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 14
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <string>
#include <cctype>
#include "strlib.h"
#include "error.h"
#include "console.h"

using namespace std;

string addCommas(string digits);

int main() {

    while (true) {
        string digits;
        cout << "Enter a number: "; getline(cin, digits);

        if (digits == "") break;

        cout << addCommas(digits) << endl;
    }

    return 0;
}

string addCommas(string digits) {
    if (digits.length() < 4) return digits;
    string result = "";

    int lastIndex = digits.length() - 1;
    for (int i = digits.length() - 3; i >= 0; i -= 3) {
        string currentThree = digits.substr(i, lastIndex - i + 1);
        result = (i == 0 ? "" : ",") + currentThree + result;
        lastIndex = i - 1;
    }

    int diff = digits.length() % 3;

    return digits.substr(0, diff) + result;
}
