// main.cpp
//
// 
// Write a program to display the prime factorization of a number n
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 9
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;

    cout << "This program displays the prime factorization of a number n" << endl;
   
    cout << "Enter number to be factored: ";
    cin >> num;

    while (num > 1) {
        if (num % 2 == 0) {
            cout << 2;
            num = num / 2;
        } else if (num % 3 == 0) {
            cout << 3;
            num = num / 3;
        } else if (num % 5 == 0) {
            cout << 5;
            num = num / 5;
        } else if (num % 7 == 0) {
            cout << 7;
            num = num / 7;
        }
        if (num == 1) break;
        else cout << " x ";
    }
    cout << endl;

}