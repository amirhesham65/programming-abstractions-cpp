// main.cpp
//
// Write a function permutations(n, k) that computes the P(n, k) function without calling the fact function.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 11
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"
#include "simpio.h"
#include "calendar.h"

using namespace std;


int main() {
    int year = getInteger("Enter a year: ");

    for (int i = 0; i < 12; i++) {
        Month currentMonth = Month(i);
        cout << monthToString(currentMonth) << " has " << daysInMonth(currentMonth, year) << " days." << endl;
    }

    return 0;
}

