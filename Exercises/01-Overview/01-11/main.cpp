// main.cpp
//
// 
// 
// Write a program that calculates an approximation of π consisting of the 
// first 10,000 terms in Leibniz’s series.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 11
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int NUMBER_OF_TERMS = 10000;
    double piOver4 = 0;

    for (int i = 1; i <= NUMBER_OF_TERMS; i++) {
        double term = 1.0 / (i + (i - 1));
        piOver4 += (i % 2 == 0) ? -term : term;
    }   

    double pi = piOver4 * 4.0;
    cout << "π approzimated to the 10,000th term of the Leibniz’s series: " << pi << endl;

}