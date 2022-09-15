// main.cpp
//
// Write a program that reads in words and prints their score in Scrabble,
// not counting any of the other bonuses that occur in the game.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 5
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

int wordScore(string str);

int letterScore(char letter);

int main() {
    cout << "This program prints the socre of a word due to ScrabbleTM." << endl;

    string word;
    cout << "Enter a word: ";
    cin >> word;

    cout << "Word score is: " << wordScore(word) << endl;

    return 0;
}

int wordScore(string str) {
    int score = 0;

    for (int i = 0; i < str.length(); i++) {
        score += letterScore(str.at(i));
    }

    return score;
}

int letterScore(char letter) {
    switch (letter) {
    case 'A': case 'E': case 'I': case 'L': case 'N':
    case 'O': case 'R': case 'S': case 'T': case 'U':
        return 1;
    case 'D': case 'G':
        return 2;
    case 'B': case 'C': case 'M': case 'P':
        return 3;
    case 'F': case 'H': case 'V': case 'W': case 'Y':
        return 4;
    case 'K':
        return 5;
    case 'J': case 'X':
        return 8;
    case 'Q': case 'Z':
        return 8;
    default:
        return 0;
    }
}



