// main.cpp
//
// Use the graphics library to draw a checkerboard
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 17
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>
#include <iomanip>
#include "gwindow.h"

using namespace std;

enum TileColor { WHITE, BLACK, RED, GRAY };

const double squareSideLength = 40;

const int WINDOW_WIDTH = squareSideLength * 8;
const int WINDOW_HEIGHT = WINDOW_WIDTH; // SQUARE

string tileColorToString(TileColor tileColor);
void drawRect(GWindow& gw, double x, double y, double sideLength, TileColor tileColor);
void drawCircle(GWindow& gw, double x, double y, double diameter, TileColor tileColor);

int main() {

    GWindow gw(WINDOW_WIDTH, WINDOW_HEIGHT);
    gw.setWindowTitle("Checkerboard");

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            double x = j * squareSideLength;
            double y = i * squareSideLength;

            bool isGray = (i % 2 != 0) ? (j % 2 == 0) : !(j % 2 == 0);
            TileColor color = isGray ? GRAY : WHITE;

            drawRect(gw, x, y, squareSideLength, color);

            if (isGray && i < 3) {
                   drawCircle(gw, x, y, 40, RED);
            }

            if (isGray && i > 4) {
                   drawCircle(gw, x, y, 40, BLACK);
            }
        }
    }


    return 0;
}

void drawRect(GWindow& gw, double x, double y, double sideLength, TileColor tileColor) {
    gw.setColor(tileColorToString(tileColor));
    gw.fillRect(x, y, sideLength, sideLength);
}

void drawCircle(GWindow& gw, double x, double y, double diameter, TileColor tileColor) {
    double padding = 5;
    gw.setColor(tileColorToString(tileColor));
    gw.fillOval(x + padding, y + padding, diameter - 2 * padding, diameter - 2 * padding);
    gw.setColor("BLACK");
    gw.drawOval(x + padding, y + padding, diameter - 2 * padding, diameter - 2 * padding);
}

string tileColorToString(TileColor tileColor) {
    switch (tileColor) {
        case WHITE: return "WHITE";
        case BLACK: return "BLACK";
        case RED: return "RED";
        case GRAY: return "GRAY";
        default: return "??";
    }
}
