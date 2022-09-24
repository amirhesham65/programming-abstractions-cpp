// main.cpp
//
// Write a function obenglobish that takes an English word and returns its Obenglobish equivalent by
// adding "ob" before each vowel except:
// 1. Vowels that follow other vowels
// 2. An e that occurs at the end of the word
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 16
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

string obenglobish(string word);
bool isVowel(char ch);

int main() {

    while (true) {
        string word = getLine("Enter a word: "); if (word == "") break;
        string trans = obenglobish(word);
        cout << word << " -> " << trans << endl;
    }

    return 0;
}

string obenglobish(string word) {
    string result;
    bool prevIsVowel = false;
    for (int i = 0; i < word.length(); i++) {
        if (isVowel(word.at(i)) && i != word.length() - 1) {
            if (prevIsVowel) {
                result += word.at(i);
            } else {
             result += string("ob") + word.at(i);
            }
            prevIsVowel = true;
        } else {
            result += word.at(i);
            prevIsVowel = false;
        }
    }
    return result;
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

