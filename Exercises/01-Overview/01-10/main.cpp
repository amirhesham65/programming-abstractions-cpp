// main.cpp
//
// 
// Write a program to display the hailstone sequence of a given number n
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 10
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
   
    cout << "Enter a number: ";
    cin >> n;

    while (n > 1) {
        if (n % 2 == 0) {
            cout << n << " is even, so I divide it by 2 to get ";
            n /= 2;
            cout << n << endl;
        } else {
            cout << n << " is odd, so I multiply it by 3 and add 1 to get ";
            n = (n * 3) + 1;
            cout << n << endl;
        }
    }

}