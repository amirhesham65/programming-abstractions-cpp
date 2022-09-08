// main.cpp
//
// Write a program that simulates the decay of a sample that contains 10,000 atoms
// of radioactive material, where each atom has a 50 percent chance of decaying
// in a year.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 13
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"
#include "simpio.h"
#include "random.h"

using namespace std;

const int YEARS = 12;

double atomsChance(int numOfAtoms);

int main() {
    int numOfAtoms = 10000;
    cout << "There are " << numOfAtoms << " atoms initially." << endl;


    for (int i = 1; i <= YEARS; i++) {
        numOfAtoms = int(numOfAtoms * atomsChance(numOfAtoms));
        cout << "There are " << numOfAtoms << " at the end of year " << i << "." << endl;
    }

    return 0;
}

double atomsChance(int numOfAtoms) {
    double sum = 0;

       for (int i = 0; i < numOfAtoms; i++) {
           sum += randomReal(0, 1);
       }

       double average = sum / double(numOfAtoms);
       return average;
}

