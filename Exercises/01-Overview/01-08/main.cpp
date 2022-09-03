// main.cpp
//
// 
// Write a program that reads a number and returns the reverse of this number
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 8
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>

using namespace std;

int reverseInt(int num);

int main() {
    int num;

    cout << "This programs reverses the digits in an integer" << endl;
   
    cout << "Enter a positive number: ";
    cin >> num;

    int reversedInt = reverseInt(num);

    cout << "The reversed integer is: " << reversedInt << endl;
}

int reverseInt(int num) {
    int result = 0;

    while (num > 0) {
        result = (result * 10) + (num % 10);
        num /= 10;
    }

    return result;
}