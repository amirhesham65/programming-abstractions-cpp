// main.cpp
//
// 
// 
// Write a program to compute the area of the quarter 
// circle by dividing it into 10,000 rectangles.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 12
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int NUMBER_OF_RECTANGLES = 10000;
    double radius = 2;
    double area = 0;
    double width = radius / NUMBER_OF_RECTANGLES;

    for (int i = 1; i <= NUMBER_OF_RECTANGLES; i++) {
        double height = sqrt(double(radius * radius - (width * i) * (width * i)));
        double rectangleArea = width * height;
        area += rectangleArea;
    }

    cout << "The area of a quarter of a circle that has radius of 2 = " << area << endl;

}