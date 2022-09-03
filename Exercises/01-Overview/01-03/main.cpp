// main.cpp
//
// Write a program that computes the sum from 1 to 100
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 1, Exercise 3
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

using namespace std;

// Two ways to compute the sum
int iterativeSum(int n);
int formulaSum(int n);

int main() {
    int end;

    cout << "This program computes the sum from 1 to n" << endl;

    cout << "Enter n: ";
    cin >> end;

    int sum1 = iterativeSum(end);
    int sum2 = formulaSum(end);

    cout << "The result of the iterative sum is: " << sum1 << endl;
    cout << "The result of sum by formula is: " << sum2 << endl;
}

// Getting the sum by iterating over n numbers O(n)
int iterativeSum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

// Getting the sum by using the formula: sum = (n+1) * (n/2)
int formulaSum(int n) {
    return (n + 1) * (n / 2);
}