// main.cpp
//
// Rewrite the wordToPigLatin function so that any word that begins with a capital
// letter in the English line still begins with a capital letter in Pig Latin.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 15
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

string lineToPigLatin(string line);
string wordToPigLatin(string word);
int findFirstVowel(string word);
bool isVowel(char ch);

int main() {
    cout << "This program translates English to Pig Latin." << endl;

    string line;
    cout << "Enter English Text: ";
    getline(cin, line);

    string translation = lineToPigLatin(line);
    cout << "Pig Latin output: " << translation << endl;

    return 0;
}

string lineToPigLatin(string line) {
    string result;
    int start = -1;
    for (int i = 0; i < line.length(); i++) {
        char ch = line.at(i);
        if (isalpha(ch)) {
            if (start == -1) start = i;
        } else {
            if (start >= 0) {
                result += wordToPigLatin(line.substr(start, i - start));
                start = -1;
            }
            result += ch;
        }
    }
    if (start >= 0) result += wordToPigLatin(line.substr(start));
    return result;
}

string wordToPigLatin(string word) {
    bool capitalize = isupper(word.at(0));
    if (capitalize) word.at(0) = tolower(word.at(0));
    int firstVowel = findFirstVowel(word);
    if (firstVowel == -1) return word;
    if (firstVowel == 0) return word + "way";
    string head = word.substr(0, firstVowel);
    string tail = word.substr(firstVowel);
    string result = tail + head + "ay";
    if (capitalize) result.at(0) = toupper(result.at(0));
    return result;
}

int findFirstVowel(string word) {
    for (int i = 0; i < word.length(); i++) {
        if (isVowel(word.at(i))) return i;
    }
    return -1;
}

bool isVowel(char ch) {
    switch (ch) {
    case 'A': case 'E': case 'I': case 'O': case 'U':
    case 'a': case 'e': case 'i': case 'o': case 'u':
        return true;
    default:
        return false;
    }
}

