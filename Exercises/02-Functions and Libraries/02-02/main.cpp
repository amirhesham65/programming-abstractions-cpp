// main.cpp
//
// Write (using functions) a program that converts a distance in meters to the corresponding 
// English distance in feet and inches.
//
//    1 inch = 0.0254 meters 
//    1 foot = 12 inches
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 2
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

/*
* Problem text:
* Reimplement the distance-conversion program from exercise 2 in Chapter 1 so that it uses a function. In this 
* case, the function must produce both the number of feet and the number of inches, which means that you need to 
* use call by reference to return these values.
*
**/

void convertDistanceToInchesAndFeet(double distance, double& distanceInInches, double& distanceInFeet);

int main() {

    double distance;

    cout << "This program converts a distance in meters to the corresponding English distance in feet and inches." << endl;

    cout << "Enter the distance in meters: ";
    cin >> distance;

    double distanceInInches;
    double distanceInFeet;

    convertDistanceToInchesAndFeet(distance, distanceInInches, distanceInFeet);

    cout << "Distance in inches is " << distanceInInches << " inches" << endl;
    cout << "Distance in feet is " << distanceInFeet << " feet" << endl;
}

void convertDistanceToInchesAndFeet(double distance, double& distanceInInches, double& distanceInFeet) {
    // Given the following units
    const double METERS_IN_INCH = 0.0254;
    const double INCHES_IN_FOOT = 12.0;

    distanceInInches = distance / METERS_IN_INCH;
    distanceInFeet = distanceInInches / INCHES_IN_FOOT;
}