// main.cpp
//
// Use the graphics library to draw a rainbow
// --------------------------------------------------------------------------
// Attribution: "Programming Abstractions in C++" by Eric Roberts
// Chapter 2, Exercise 16
// Stanford University, Autumn Quarter 2012
// http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1136/materials/CS106BX-Reader.pdf
// --------------------------------------------------------------------------
//
// Created by Amir Hesham

#include <iostream>
#include <cmath>
#include <iomanip>
#include "gwindow.h"
#include "rainbow.h"

using namespace std;

const double ASPECT_RATIO = 2.3;

const int WINDOW_WIDTH = 500;
const int WINDOW_HEIGHT = WINDOW_WIDTH / ASPECT_RATIO;


void drawBackground(GWindow& gw);

void drawArc(GWindow& gw, double gap, RainbowColor color);

void translateCircleAxes(double& x, double& y, double radius);

int main() {

    GWindow gw(WINDOW_WIDTH, WINDOW_HEIGHT);
    gw.setWindowTitle("Rainbow");

    drawBackground(gw);
    double gap = 15;

    for (RainbowColor arcColor = RED; arcColor < LAST_COLOR; arcColor++) {
        drawArc(gw, gap, arcColor);
        gap += 15;
    }

    return 0;
}

void drawBackground(GWindow& gw) {
    gw.setColor(colorToString(CYAN));
    gw.fillRect(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
}

void drawArc(GWindow& gw, double gap, RainbowColor color) {

    double centerX = WINDOW_WIDTH / 2;
    double centerY = WINDOW_HEIGHT * 2;
    double radius = centerY - gap;

    translateCircleAxes(centerX, centerY, radius);

    gw.setColor(colorToString(color));
    gw.fillOval(centerX, centerY, radius * 2, radius * 2);

}

void translateCircleAxes(double& x, double& y, double radius) {
    x = x - radius;
    y = y - radius;
}
