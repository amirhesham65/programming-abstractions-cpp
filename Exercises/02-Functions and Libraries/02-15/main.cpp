// main.cpp
//
// Write a program that simulates flipping a coin repeatedly and continues 
// until three consecutive heads have been tossed.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 15
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"
#include "random.h"

using namespace std;

int main() {
    int repeats = 0;
    int count = 0;

    while (repeats < 3) {
        bool currentFlip = randomBool();
        if (currentFlip) {
            repeats++;
        } else {
            repeats = 0;
        }
        cout << (currentFlip ? "heads" : "tails") << endl;
        count++;
    }

    cout << "It took " << count << " to get to 3 consecutive heads";

    return 0;
}
