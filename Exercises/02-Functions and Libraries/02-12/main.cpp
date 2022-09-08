// main.cpp
//
// Write a program `RandomAverage` that repeatedly generates a random real number
// between 0 and 1 and then displays the average after a specified number of
// trials entered by the user.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 12
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


int main() {
    int countOfTrials = getInteger("Enter the number of trials: ");
    double sum = 0;

    for (int i = 0; i < countOfTrials; i++) {
        sum += randomReal(0, 1);
    }

    double average = sum / double(countOfTrials);

    cout << "The average is: " << average << endl;
    return 0;
}

