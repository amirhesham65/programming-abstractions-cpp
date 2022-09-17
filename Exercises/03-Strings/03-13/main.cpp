// main.cpp
//
// Devise a rule that determines what suffix should be added to each number,
// and then use this rule to write a function createOrdinalForm(n) that
// returns the ordinal form of the number n as a string.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 13
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

string intToStr(int n);
string createOrdinalForm(int n);

int main() {

    cout << createOrdinalForm(11) << endl;
    cout << createOrdinalForm(22) << endl;
    cout << createOrdinalForm(333) << endl;
    cout << createOrdinalForm(4444) << endl;

    return 0;
}

string createOrdinalForm(int n) {
    string suffix;
    if (abs(n) == 11 || abs(n) == 12 || abs(n) == 13) {
        suffix = "th";
    } else if (abs(n) % 10 == 1) {
        suffix = "st";
    } else if (abs(n) % 10 == 2) {
        suffix = "nd";
    } else if (abs(n) % 10 == 3) {
        suffix = "rd";
    } else {
        suffix = "th";
    }
    return intToStr(n) + suffix;
}

string intToStr(int n) {
    if (n == 0) return "0";

    string result;
    string sign = n < 0 ? "-" : "";

    while(abs(n) > 0) {
        int onesDigit = abs(n) % 10;
        result = char(onesDigit + '0') + result;
        n /= 10;
    }

    return sign + result;
}





