// main.cpp
//
// 
// Write a program that reads in a positive integer N and then calculates and displays 
// the sum of the first N odd integers. For example, if N is 4, your program should
// display the value 16, which is 1 + 3 + 5 + 7.
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 4
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

int sumOfFirstOddIntegers(int n);

int main() {
    int n;

    cout << "A program that calculates and displays the sum of the first N odd integers" << endl;

    cout << "Enter n: ";
    cin >> n;

    cout << "The result is: " << sumOfFirstOddIntegers(n) << endl;
}

int sumOfFirstOddIntegers(int n) {
    int sum = 0;
    
    for (int i = 0; n > 0; i++) {
        if (i % 2 != 0) {
            sum += i;
            n--;
        }
    }

    return sum;
}