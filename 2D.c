//
// Created by kumme on 08.12.2021.
//

#include "2D.h"
#include "flush.h"
#include <stdio.h>

#define pi 3.1415926

double circle() {
    double kDiameter;
    dCheck:
    printf("Gib den Durchmesser deines Kreises an: \n");
    while (scanf("%lf%*[0-9]", &kDiameter) != 1) {
        error1();
    }

    if (kDiameter < 0){
        error2();
        goto dCheck;
    }

    double kRadius = kDiameter / 2;
    double kArea = kRadius * kRadius * pi;
    printf("Die Fl\x84""che deines Kreises betr\x84gt: %lf\n", kArea);
    return 0;
}

double square() {
    double sSquare;
    squareCheck:
    printf("Gib die Seitenl\x84nge deines Quadrates an: \n");
    while (scanf("%lf%*[0-9]", &sSquare) != 1) {
        error1();
    }

    if (sSquare < 0){
        error2();
        goto squareCheck;
    }

    double aSquare = sSquare * sSquare;
    printf("Die Fl\x84""che deines Qudrates betr\x84gt: %lf\n", aSquare);
    return 0;
}

double rectangle() {
    double sRectangleA;
    rACheck:
    printf("Gib die l\x84nge deines Rechtecks an: \n");
    while (scanf("%lf%*[0-9]", &sRectangleA) != 1) {
        error1();
    }

    if (sRectangleA < 0){
        error2();
        goto rACheck;
    }


    double sRectangleB;
    rBCheck:
    printf("Gib die breite deines Rechtecks an: \n");
    while (scanf("%lf%*[0-9]", &sRectangleB) != 1) {
        error1();
    }

    if (sRectangleB < 0){
        error2();
        goto rBCheck;
    }

    double aRectangle = sRectangleA * sRectangleB;
    printf("Die Fl\x84""che deines Rechtecks betr\x84gt: %lf\n", aRectangle);
    return 0;
}

double triangle() {
    double gTriangle;
    double hTriangle;
    double aTriangle;
    gCheck:
    printf("Gib die Grundseite des Dreiecks ein: \n");
    while (scanf("%lf%*[0-9]", &gTriangle) != 1) {
        error1();
    }

    if (gTriangle < 0){
        error2();
        goto gCheck;
    }

    hCheck:
    printf("Gib die H\x94he deines Dreiecks an: \n");
    while (scanf("%lf%*[0-9]", &hTriangle) != 1) {
        error1();
    }

    if (hTriangle < 0){
        error2();
        goto hCheck;
    }

    aTriangle = gTriangle * hTriangle / 2;
    printf("Die Fl\x84""che deines Dreiecks betr\x84gt: %lf\n", aTriangle);
    return 0;
}

double trapezoid() {
    double trapezoidGroundLine;
    double trapezTopLine;
    double trapezoidHeight;
    double trapezoid;

    gTrapezoid:
    printf("Gib die L\x84nge der Grundlinie deines Trapez an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezoidGroundLine) != 1) {
        error1();
    }

    if (trapezoidGroundLine < 0){
        error2();
        goto gTrapezoid;

    }

    dCheck:
    printf("Gib die L\x84nge der Deckenlinie deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezTopLine) != 1) {
        error1();
    }

    if (trapezTopLine < 0){
        error2();
        goto dCheck;

    }

    hCheck:
    printf("Gib die H\x94he deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezoidHeight) != 1) {
        error1();
    }

    if (trapezoidHeight < 0){
        error2();
        goto hCheck;
    }
    trapezoid = ((trapezoidGroundLine + trapezTopLine) / 2) * trapezoidHeight;
    printf("Das Volumen deines Trapez ist: %lf cm^3\n", trapezoid);
    return 0;
}
