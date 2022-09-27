// main.cpp
//
// Write a function that returns the first position at which the DNA
// strand s1 can attach to the strand s2.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 3, Exercise 20
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

int findDNAMatch(string s1, string s2, int start = 0);
char invertBase(char base);
string invertStrand(string strand);

int main() {
    string s2 = getLine("Enter the long strand: ");
    string s1 = getLine("Enter the target strand: ");
    int start = getInteger("Enter search start position: ");

    int index = findDNAMatch(s1, s2, start);
    cout << "Target was found at index: " << index << endl;
    return 0;
}

int findDNAMatch(string s1, string s2, int start) {
    string target = invertStrand(s1);
    size_t found = s2.find(target, start);
    if (found == string::npos) {
        return -1;
    }
    return found;
}

char invertBase(char base) {
    switch (base) {
        case 'A': return 'T';
        case 'T': return 'A';
        case 'C': return 'G';
        case 'G': return 'C';
        default: return '?';
    }
}

string invertStrand(string strand) {
    string result = "";

    for (int i = 0; i < strand.length(); i++) {
        result += invertBase(strand.at(i));
    }

    return result;
}
