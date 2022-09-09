// rainbow.cpp
//
//
// This file implements:
//
// RainbowColor (Type)
// RainbowColor++ (Operator)
// colorToString (function)
// daysInMonth (function)
//
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 16
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>

/// Type: RainbowColor
/// ----------------------------------------------
/// Represents 6 different colors as requested in the assignment in addition to the background color
enum RainbowColor { RED, ORANGE, YELLOW, GREEN, BLUE, MAGENTA, CYAN, LAST_COLOR };

/// Operator: (RainboColor)++
/// Usage: RainbowColor color = RED; color++;
/// ----------------------------------------------
/// An operator that returns the next color in RainbowColor enum
RainbowColor operator++(RainbowColor& arcColor, int) {
    RainbowColor old = arcColor;
    arcColor = RainbowColor(old + 1);
    return arcColor;
}

/// Function: colorAsString
/// Usage: string colorAsString = colorToString(color);
/// ----------------------------------------------
/// A function that returns the constant name for a value of type RainbowColor.
std::string colorToString(RainbowColor arcColor) {
    switch (arcColor) {
        case RED:     return "RED";
        case ORANGE:  return "ORANGE";
        case YELLOW:  return"YELLOW";
        case GREEN:   return "GREEN";
        case BLUE:    return "BLUE";
        case MAGENTA: return "MAGENTA";
        case CYAN:    return "CYAN";
        default:      return "??";
    }
}
