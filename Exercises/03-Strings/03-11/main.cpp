// main.cpp
//
// Write a predicate function isSentencePalindrome(str) that returns true
// if the string str fits this definition of a sentence palindrome.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 11
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

bool isSentencePalindrome(string str);

int main() {
    cout << "This program tests for sentence palindromes." << endl;
    cout << "Indicate the end of the input with a blank line." << endl;

    while (true) {
        string line;
        cout << "Enter a sentence: ";
        getline(cin, line);

        if (line == "") break;

        if (isSentencePalindrome(line)) {
            cout << "This sentence is a palindrome." << endl;
        } else {
            cout << "This sentence is NOT a palindrome." << endl;
        }
    }

    return 0;
}

// Two pointer approach l-> start, r-> end
bool isSentencePalindrome(string str) {
    int l = 0;
    int r = str.length() - 1;

    while (l < r) {
        if (!isalpha(str.at(l))) {
            l++;
            continue;
        }
        if (!isalpha(str.at(r))) {
            r--;
            continue;
        }
        if (tolower(str.at(l)) != tolower(str.at(r))) return false;
        l++;
        r--;
    }
    return true;
}
