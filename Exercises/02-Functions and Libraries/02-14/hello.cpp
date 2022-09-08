// main.cpp
//
// Write a program that simulates throwing 10,000 darts and then uses the simulation
// technique described in this exercise to generate and display an
// approximate value of π.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 14
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"
#include "random.h"

using namespace std;

bool didHitTheCircle(double x, double y);

int main() {
    int numOfDarts = 10000;
    int numOfHits = 0;

    for (int i = 0; i < numOfDarts; i++) {
        double x = randomReal(-1, 1);
        double y = randomReal(-1, 1);

        if(didHitTheCircle(x, y)) {
            numOfHits++;
        }
    }

    double fraction = double(numOfHits) / numOfDarts;

    cout << "The value of PI is: " << fraction * 4 << endl;

    return 0;
}

bool didHitTheCircle(double x, double y) {
    return (x* x + y * y) < 1;
}
