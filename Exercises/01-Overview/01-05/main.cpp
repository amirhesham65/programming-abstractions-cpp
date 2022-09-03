// main.cpp
//
// 
// Write a program that reads in a list of integers from the user until the user enters the 
// value 0 as a sentinel. When the sentinel appears, your program should display the largest 
// value in the list 
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 5
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

int main() {
    int num;
    int max = 0;

    const int SENTINEL = 0;

    cout << "This program finds the largest integer in a list." << endl;
    cout << "Enter 0 to signal the end of the list" << endl;

    while (true)
    {
        cout << "\t? ";
        cin >> num;
        if (num == SENTINEL) break;
        max = (num > max) ? num : max;
    }

    cout << "The largest number is: " << max << endl;
}
