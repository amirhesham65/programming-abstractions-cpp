// calendar.h
//
//
// This file exports:,
//
// Month (Type)
// monthToString (function)
// isLeapYear (function)
// daysInMonth (function)
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 11
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#ifndef CALENDAR_H
#define CALENDAR_H

/// Type: Month
/// ----------------------------------------------
/// Represents the 12 months in the year. From January to December
enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

/// Function: monthToString
/// Usage: string monthAsString = monthToString(month);
/// ----------------------------------------------
/// A function that returns the constant name for a value of type Month.
std::string monthToString(Month month);
/// Function: isLeapYear
/// Usage: bool isLeap = isLeapYear(year);
/// A function that encodes the rule for determining leap years: a leap year is any year divisible by 4,
/// except for years ending in 00, in which case the year must be divisible by 400.
bool isLeapYear(int year);

/// Function: daysInMonth
/// Usage: int days = daysInMonth(month, year);
/// ----------------------------------------------
/// A function that returns the number of days in a given month;
int daysInMonth(Month month, int year);

#endif // CALENDAR_H
