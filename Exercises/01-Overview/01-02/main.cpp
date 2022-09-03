// main.cpp
//
// Write a program that converts a distance in meters to the corresponding English distance in 
// feet and inches.
//
//    1 inch = 0.0254 meters 
//    1 foot = 12 inches
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 2
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

int main() {

    // Given the following units
    const double METERS_IN_INCH = 0.0254;
    const double INCHES_IN_FOOT = 12.0;

    double distance;

    cout << "This program converts a distance in meters to the corresponding English distance in feet and inches." << endl;

    cout << "Enter the distance in meters: ";
    cin >> distance;

    double distanceInInches = distance / METERS_IN_INCH;
    double distanceInFeet = distanceInInches / INCHES_IN_FOOT;

    cout << "Distance in inches is " << distanceInInches << " inches" << endl;
    cout << "Distance in feet is " << distanceInFeet << " feet" << endl;
}