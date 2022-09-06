// main.cpp
//
// Write a procedure that returns the Easter date for year in the reference parameters month and day using gauss algorithm.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 8
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include "console.h"

using namespace std;

void findEaster(int year, string& month, int& day);

int main() {
    int year;
    string month;
    int day;

    cout << "This program determines the easter day for a given year using gauss algorithm." << endl;

    cout << "Enter a year between 1700 and 1799: ";
    cin >> year;

    findEaster(year, month, day);

    cout << month << " " << day << endl;

    return 0;
}

void findEaster(int year, string& month, int& day) {
    int a = year % 19;
    int b = year % 4;
    int c = year % 7;

    int d = (19 * a + 23) % 30;

    int successor = (year >= 1700 && year < 1800) ? 3 : 4;

    int e =  (2 * b + 4 * c + 6 * d + successor) % 7;

    month = (d + e > 9) ? "April" : "March";
    day = (d + e > 9) ? d + e - 9 : 22 + d + e;
}

