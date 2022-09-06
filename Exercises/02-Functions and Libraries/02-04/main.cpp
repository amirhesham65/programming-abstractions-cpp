// main.cpp
//
// Write a function windChill that takes the values of t and v and returns the wind chill. In doing so, your function should take account of two special cases:
// - If there is no wind, windChill should return the original temperature t.
// - If the temperature is greater than 40° F, the wind chill is undefined, and
//   your function should call error with an appropriate message.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 4
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>
#include <iomanip>
#include "error.h"

using namespace std;

double windChill(double t, double v);

int main() {

    for (int v = 5; v <= 60; v += 5) {
        for (int t = 40; t >= -45; t -= 5) {
            cout << setw(6) << round(windChill(t, v));
        }
        cout << endl;
    }


    return 0;
}

double windChill(double t, double v) {
    if (v == 0) return t;
    if (t > 40) error("The temprature is greater than 40F. The wind chill is undefined.");
    return 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);
}
