// calendar.cpp
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

#include <iostream>

/// Type: Month
/// ----------------------------------------------
/// Represents the 12 months in the year. From January to December
enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

/// Function: monthToString
/// Usage: string monthAsString = monthToString(month);
/// ----------------------------------------------
/// A function that returns the constant name for a value of type Month.
std::string monthToString(Month month) {
    switch (month) {
        case JANUARY: return "JANUARY";
        case FEBRUARY: return "FEBRUARY";
        case MARCH: return "MARCH";
        case APRIL: return "APRIL";
        case MAY: return "MAY";
        case JUNE: return "JUNE";
        case JULY: return "JULY";
        case AUGUST: return "AUGUST";
        case SEPTEMBER: return "SEPTEMBER";
        case OCTOBER: return "OCTOBER";
        case NOVEMBER: return "NOVEMBER";
        case DECEMBER: return "DECEMBER";
    }
}

/// Function: isLeapYear
/// Usage: bool isLeap = isLeapYear(year);
/// A function that encodes the rule for determining leap years: a leap year is any year divisible by 4,
/// except for years ending in 00, in which case the year must be divisible by 400.
bool isLeapYear(int year) {
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

/// Function: daysInMonth
/// Usage: int days = daysInMonth(month, year);
/// ----------------------------------------------
/// A function that returns the number of days in a given month;
int daysInMonth(Month month, int year) {
    switch (month) {
    case APRIL:
    case JUNE:
    case SEPTEMBER:
    case NOVEMBER:
        return 30;
    case FEBRUARY:
        return (isLeapYear(year)) ? 29 : 28;
    default:
        return 31;
    }
}
