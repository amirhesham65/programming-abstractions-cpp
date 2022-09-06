// main.cpp
//
// Write a predicate function isPerfect that takes an integer n and returns true if n is perfect, and false otherwise.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 5
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

bool isPerfect(int n);

int main() {

    for (int i = 1; i <= 9999; i++) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }

    return 0;
}

bool isPerfect(int n) {
    int sumOfDivisors = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sumOfDivisors += i;
        }
    }

    return (n == sumOfDivisors) ? true : false;
}
