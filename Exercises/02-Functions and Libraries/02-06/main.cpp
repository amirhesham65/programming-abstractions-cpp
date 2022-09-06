// main.cpp
//
// Write a predicate method isPrime(n) that returns true if the integer n is prime, and false otherwise.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 6
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"

using namespace std;

bool isPrime(int n);

int main() {

    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }

    return 0;
}

bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) { return false; }
    }
    return true;
}
