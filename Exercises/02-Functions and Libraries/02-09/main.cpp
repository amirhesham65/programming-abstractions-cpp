// main.cpp
//
// Write a function permutations(n, k) that computes the P(n, k) function without calling the fact function.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 9
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"

using namespace std;

int permutation(int n, int k);

int main() {
    int n;
    int k;

    cout << "This program computes the number of permutations ordering k elements from a collection of size n" << endl;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    cout << permutation(n, k) << endl;

    return 0;
}

int permutation(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; i++) {
       result *= n-i;
    }
    return result;
}
