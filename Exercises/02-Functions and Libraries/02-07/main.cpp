// main.cpp
//
// Write your own implementation of the sqrt function using successive approximation to determine the square root of x:
//    1. Begin by guessing that the square root is x / 2. Call that guess g.
//    2. The actual square root must lie between g and x / g. At each step in the
//    successive approximation, generate a new guess by averaging g and x / g.
//    3. Repeat step 2 until the values g and x / g are as close together as the precision of the hardware allows. In C++, the best way to check for this condition is to test whether the average is equal to either of the values used to generate it.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 7
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"

using namespace std;

double sqrt(double x);

int main() {

    cout << sqrt(144) << endl;

    return 0;
}

double sqrt(double x) {
    double g = x / 2.0;
    double newGuess;

    while ((newGuess = (g + x/g) / 2.0) != g) {
        g = newGuess;
    }

    return newGuess;
}
