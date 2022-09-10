// main.cpp
//
// Write a graphics program to draw this symbol (yin yang) at the center of an empty graphics window.
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 18
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

enum Color { BLACK, WHITE };
string colorToString(Color color);

void drawCircle(GWindow& gw, double circleX, double circleY, double circleRadius, Color color, bool isFilled = false);

const int WINDOW_WIDTH = 400;
const int WINDOW_HEIGHT = WINDOW_WIDTH; // SQUARE

int main() {

    GWindow gw(WINDOW_WIDTH, WINDOW_HEIGHT);
    gw.setWindowTitle("Yin Yang Symbol");

    double circleRadius = 150;

    drawCircle(gw, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, circleRadius, BLACK, true);

    double smallCircleRadius = circleRadius / 2;

    for (int i = 0; i <= 18; i++) {
        double smallCircleX = WINDOW_WIDTH / 2 - (circleRadius / 2) * sin(i * 10 * M_PI / 180);
        double smallCircleY = WINDOW_HEIGHT / 2 - (circleRadius / 2) * cos(i * 10 * M_PI / 180);

        Color cricleColor = (i < 18) ? WHITE : BLACK;
        drawCircle(gw, smallCircleX, smallCircleY, smallCircleRadius, cricleColor, true);
    }

    drawCircle(gw, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, circleRadius, BLACK);

    drawCircle(gw, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 - (circleRadius / 2), 15, BLACK, true);
    drawCircle(gw, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 + (circleRadius / 2), 15, WHITE, true);



    return 0;
}

string colorToString(Color color) {
    switch (color) {
        case BLACK: return "BLACK";
        case WHITE: return "WHITE";
        default: return "???";
    }
}

void drawCircle(GWindow& gw, double circleX, double circleY, double circleRadius, Color color, bool isFilled) {
    gw.setColor(colorToString(color));
    if (isFilled) {
        gw.fillOval(circleX - circleRadius, circleY - circleRadius, 2 * circleRadius, 2 * circleRadius);
    } else {
        gw.drawOval(circleX - circleRadius, circleY - circleRadius, 2 * circleRadius, 2 * circleRadius);
    }
}
