// main.cpp
//
// Write a function acronym that takes a string and returns the acronym formed from that string.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 6
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

string acronym(string str);

int main() {
    cout << "This program prints the acronym corresponding to a line:." << endl;

    string line;
    cout << "Enter a line: ";
    getline(cin, line);

    cout << "Acronym is: " << acronym(line) << endl;

    return 0;
}

string acronym(string str) {
    string result = "";
    bool start = true;

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str.at(i))) {
            if (start) {
                result += str.at(i);
                start = false;
            }
        } else {
            start = true;
        }
    }

    return result;
}
