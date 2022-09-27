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

// itssg vgksr

#include <iostream>
#include <string>
#include <cctype>
#include "strlib.h"
#include "simpio.h"
#include "error.h"
#include "console.h"

using namespace std;

const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";

string encodeLetterSub(string str, string key);
string invertKey(string key);

int main() {
    cout << "Letter substitution cipher." << endl;

    string key = getLine("Enter a 26-letter key: ");
    string message = getLine("Enter a message: ");
    string encoded = encodeLetterSub(message, key);
    cout << "Encoded message: " << encoded << endl;

    string invertedKey = invertKey(key);
    cout << "Inverted 26-letter key: " << invertedKey << endl;
    cout << "Decoded Message: " << encodeLetterSub(encoded, invertedKey);

    return 0;
}

string invertKey(string key) {
    string result = string(key.length(), ' ');

    if (key.length() != 26) {
        error("A key of 26 letter should be present.");
    } else {
        key = toLowerCase(key);
    }

    for (int i = 0; i < key.length(); i++) {
        size_t posInAlpha = ALPHABET.find(key.at(i));
        result.at(posInAlpha) = toupper(ALPHABET.at(i));
    }

    return result;
}

string encodeLetterSub(string str, string key) {
    string result;

    if (key.length() != 26) {
        error("A key of 26 letter should be present.");
    } else {
        key = toLowerCase(key);
    }

    for (int i = 0; i < str.length(); i++) {
        bool capitalized = isupper(str.at(i));
        size_t found = ALPHABET.find(tolower(str.at(i)));
        if (found == string::npos) {
            result += str.at(i);
            continue;
        }
        char encoded = key.at(found);
        result += capitalized ? toupper(encoded) : encoded;
    }

    return result;
}

