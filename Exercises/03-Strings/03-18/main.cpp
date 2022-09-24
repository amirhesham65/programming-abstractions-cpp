// main.cpp
//
// Write a program that implements encryption using a letter-substitution cipher.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 18
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <string>
#include <cctype>
#include "strlib.h"
#include "simpio.h"
#include "error.h"
#include "console.h"

using namespace std;

string encodeLetterSub(string str, string key);

int main() {
    cout << "Letter substitution cipher." << endl;

    string key = getLine("Enter a 26-letter key: ");

    string message = getLine("Enter a message: ");

    cout << "Encoded message: " << encodeLetterSub(message, key);

    return 0;
}

string encodeLetterSub(string str, string key) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    string result;

    if (key.length() != 26) {
        error("A key of 26 letter should be present.");
    } else {
        key = toLowerCase(key);
    }

    for (int i = 0; i < str.length(); i++) {
        bool capitalized = isupper(str.at(i));
        size_t found = alphabet.find(tolower(str.at(i)));
        if (found == string::npos) {
            result += str.at(i);
            continue;
        }
        char encoded = key.at(found);
        result += capitalized ? toupper(encoded) : encoded;
    }

    return result;
}



