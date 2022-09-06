// combinatorics.cpp
//
//
// This file exports some functions related to discrete mathematics,
// namely:
//
//    combinations(n, k)
//    permutations(n, k)
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 10
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

//
// Implementation notes: fact
// --------------------------
// Returns the factorial of an unsigned integer.
//
long fact(unsigned x) {
    int result = 1;

    for (int i = 1; i <= x; i++) {
        result *= i;
    }

    return result;
}

//
// Implementation notes: permutations
// ----------------------------------
// Returns the number of permutations for choosing n items k at a time according
// to this formula:
//
//      P(n, k) = n! / (n - k)!
//
// Implementation is optimized (and overflow avoided) by using the denominator
// as a guide to factoring a clever form of one.
//
long permutations(unsigned n, unsigned k) {
    long result = 1;

    for (int i = 0; i < k; i++) {
       result *= n-i;
    }

    return result;
}

//
// Implementation notes: combinations
// ----------------------------------
// Returns the number of combinations for choosing n items k at a time according
// to this formula:
//
//      C(n, k) = n! / (k! * (n - k)!)
//
// Implementation is optimized (and overflow avoided) by using the denominator
// as a guide to factoring a clever form of one.
//
long combinations(unsigned n, unsigned k) {
    return permutations(n, k) / fact(k);
}




