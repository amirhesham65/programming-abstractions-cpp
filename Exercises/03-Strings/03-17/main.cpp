// main.cpp
//
// Implement Caesar cipher with a function that returns a new string formed by shifting every letter in str
// forward the number of letters indicated by shift, cycling back to the beginning of the alphabet if necessary.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 17
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

string encodeCaesarCipher(string str, int shift);

int main() {
    cout << "This program encodes a message using Caeser cipher." << endl;

    int shift = getInteger("Enter the number of character positions to shift: ");

    string message = getLine("Enter a message: ");

    cout << "Encoded message: " << encodeCaesarCipher(message, shift);

    return 0;
}

size_t cycle(size_t currentIndex, int cycleLength, int shift) {
    return ((currentIndex + shift) % cycleLength);
}

string encodeCaesarCipher(string str, int shift) {
    string result;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < str.length(); i++) {
        bool capitalized = isupper(str.at(i));
        size_t found = alphabet.find(tolower(str.at(i)));
        if (found == string::npos) {
            result += str.at(i);
            continue;
        }
        char encoded = alphabet.at(cycle(found, alphabet.length(), shift));
        result += capitalized ? toupper(encoded) : encoded;
    }

    return result;
}
