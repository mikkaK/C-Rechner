//
// Created by kumme on 08.12.2021.
//

#include "2D.h"
#include <stdio.h>

#define pi 3.1415926

double circle() {
    double kDiameter;
    dCheck:
    printf("Gib den Durchmesser deines Kreises an: \n");
    while (scanf("%lf%*[0-9]", &kDiameter) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (kDiameter < 0){
        printf("Eingabe darf nicht kleiner als 0 sein\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
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
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (sSquare < 0){
        goto squareCheck;
        while (!feof(stdin) && fgetc(stdin) != '\n');
        printf("Eingabe darf nicht kleiner als 0 sein\n");
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
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (sRectangleA < 0){
        while (!feof(stdin) && fgetc(stdin) != '\n');
        printf("Eingabe darf nicht kleiner als 0 sein\n");
        goto rACheck;
    }


    double sRectangleB;
    rBCheck:
    printf("Gib die breite deines Rechtecks an: \n");
    while (scanf("%lf%*[0-9]", &sRectangleB) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (sRectangleB < 0){
        while (!feof(stdin) && fgetc(stdin) != '\n');
        printf("Eingabe darf nicht kleiner als 0 sein\n");
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
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');

    }

    if (gTriangle < 0){
        printf("Eingabe darf nicht kleiner als 0 sein\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
        goto gCheck;
    }

    hCheck:
    printf("Gib die H\x94he deines Dreiecks an: \n");
    while (scanf("%lf%*[0-9]", &hTriangle) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (hTriangle < 0){
        printf("Eingabe darf nicht kleiner als 0 sein\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
        goto hCheck;

    }

    aTriangle = gTriangle * hTriangle / 2;

    printf("Die Fl\x84""che deines Dreiecks betr\x84gt: %lf\n", aTriangle);

}

double trapez() {
    double trapezGrundlinie;
    double trapezDeckenlinie;
    double trapezHoehe;

    gTrapez:
    printf("Gib die L\x84nge der Grundlinie deines Trapez an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezGrundlinie) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (trapezGrundlinie < 0){
        printf("Eingabe darf nicht kleiner als 0 sein");
        while (!feof(stdin) && fgetc(stdin) != '\n');
        goto gTrapez;

    }

    dCheck:
    printf("Gib die L\x84nge der Deckenlinie deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezDeckenlinie) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (trapezDeckenlinie < 0){
        printf("Eingabe darf nicht kleiner als 0 sein\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
        goto dCheck;

    }

    hCheck:
    printf("Gib die H\x94he deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezHoehe) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if (trapezHoehe < 0){
        printf("Eingabe darf nicht kleiner als 0 sein\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
        goto hCheck;
    }
    double trapez = ((trapezGrundlinie + trapezDeckenlinie) / 2) * trapezHoehe;
    printf("Das Volumen deines Trapez ist: %lf cm^3\n", trapez);
    return 0;
}
