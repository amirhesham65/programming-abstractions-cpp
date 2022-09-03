// main.cpp
//
// Write a program that reads in a temperature in degrees Celsius and displays the
// corresponding temperature in degrees Fahrenheit. The conversion formula is
//
//    F = (9/5)C + 32
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 1
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

int main() {
    double tempC;

    cout << "This program converts Celsius temprature to Fahrenheit temprature" << endl;
    cout << "Enter a temperature in degrees Celsius: ";
    cin >> tempC;

    double tempF = (9.0 / 5) * tempC + 32;

    cout << "The corresponding Fahrenheit temprature is: " << tempF << endl;
}