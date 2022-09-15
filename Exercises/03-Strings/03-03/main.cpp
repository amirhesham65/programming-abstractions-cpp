// main.cpp
//
// Implement the function `substr(str, pos, n)`,that returns the substring of str beginning
// at position pos and containing at most n characters.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 3
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

string substr(string str, int pos, int n);
string substr(string str, int pos);

int main() {
    cout << substr("thisistest", 0) << endl;
    return 0;
}

string substr(string str, int pos, int n) {
    string result = "";

    if (n > str.length()) n = str.length() - 1 - pos;
    if (pos > str.length()) error("pos is not valid");

    for (int i = pos; i < pos+n; i++) {
        result += str.at(i);
    }

    return result;
}

string substr(string str, int pos) {
    return substr(str, pos, str.length() - pos);
}
