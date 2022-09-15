// main.cpp
//
// Write a function createRegularPlural(word) that returns the plural of word
// formed by following these standard English"
//     a. If the word ends in s, x, z, ch, or sh, add es to the word.
//     b. If the word ends in a y preceded by a consonant, change the y to ies.
//     c. In all other cases, add just an s.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 12
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

string createRegularPlural(string word);

bool isVowel(char letter);

int main() {

    cout << createRegularPlural("ball") << endl;
    cout << createRegularPlural("play") << endl;
    cout << createRegularPlural("cry") << endl;
    cout << createRegularPlural("plus") << endl;
    return 0;
}

string createRegularPlural(string word) {
    if (endsWith(word, "s") || endsWith(word, "x") || endsWith(word, "z")
            || endsWith(word, "ch") || endsWith(word, "sh")) {
        word += "es";
    } else if (endsWith(word, 'y') && !isVowel(word[word.length() - 2])) {
        word.replace(word.length() - 1, 3, "ies");
    } else {
        word += "s";
    }
    return word;
}

bool isVowel(char letter) {
    switch (letter) {
        case 'A': case 'E': case 'O': case 'I': case 'U':
        case 'a': case 'e': case 'o': case 'i': case 'u':
            return true;
        default:
            return false;
    }
}

