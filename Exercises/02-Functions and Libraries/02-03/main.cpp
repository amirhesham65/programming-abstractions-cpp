// main.cpp
//
// Write a function roundToNearestInt(x) that rounds the floating-point number x to the 
// nearest integer. Show that your function works by writing a suitable main program to test it.
//
//    
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 3
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

int roundToTheNearestInt(double x);

int main() {
    double input;

    cout << "Enter a number to be rounded to the nearest integer: " << endl;
    cin >> input;

    int rounded = roundToTheNearestInt(input);

    cout << "The rounded number is: " << rounded << endl;
}

int roundToTheNearestInt(double x) {
    return int((x > 0) ? x + 0.5 : x - 0.5);
}
