// main.cpp
//
// Write (using functions) a program that reads in a temperature in degrees Celsius and displays the
// corresponding temperature in degrees Fahrenheit. The conversion formula is
//
//    F = (9/5)C + 32
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 1
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

double celToFeh(double tempC);

int main() {
    double tempC;

    cout << "This program converts Celsius temprature to Fahrenheit temprature" << endl;
    cout << "Enter a temperature in degrees Celsius: ";
    cin >> tempC;

    double tempF = celToFeh(tempC);

    cout << "The corresponding Fahrenheit temprature is: " << tempF << endl;
}

double celToFeh(double tempC) {
    double tempF = (9.0 / 5) * tempC + 32;
    return tempF;
}