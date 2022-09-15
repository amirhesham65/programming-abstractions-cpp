// main.cpp
//
// Write a function that returns a copy of str with every occurrence of c1 replaced by c2.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 10
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

string replaceAll(string str, char c1, char c2);
string replaceAll(string str, string s1, string s2);

int main() {

    string text = "This is very very good!";
    cout << replaceAll(text, "very", "really") << endl;

    return 0;
}

string replaceAll(string str, char c1, char c2) {
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == c1) {
            str.at(i) = c2;
        }
    }
    return str;
}

string replaceAll(string str, string s1, string s2) {
    while (str.find(s1) != string::npos) {
        str.replace(str.find(s1), s1.length(), s2);
    }
    return str;
}
