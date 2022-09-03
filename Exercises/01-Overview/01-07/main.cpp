// main.cpp
//
// 
// Write a program that reads in a list of integers from the user until the user enters the 
// value -1 as a sentinel. When the sentinel appears, your program should display the average 
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 7
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;
    int count = 0;

    const int SENTINEL = -1;

    cout << "This program finds the average of a list" << endl;
    cout << "Enter -1 to signal the end of the list" << endl;

    while (true)
    {
        cout << "\t? ";
        cin >> num;
        if (num == SENTINEL) break;
        sum += num;
        count++;
    }

    double average = double(sum) / count;

    cout << "The average is: " << average << endl;
}
