//
// Created by kumme on 08.12.2021.
//

#include "2D.h"
#include "flush.h"
#include <stdio.h>

#define pi 3.1415926 //Pi vordefinieren

double circle() { //Kreisflächenberechnungsfunktion
    double cDiameter;
    double cRadius;
    double cArea;
    dCheck:
    printf("Gib den Durchmesser deines Kreises an: \n");
    while (scanf("%lf%*[0-9]", &cDiameter) != 1) { //Benutzereingabe
        error1(); //Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }


    if (cDiameter < 0) { //Fals der Wert nicht grösser über 0 ist
        error2(); //Flush
        goto dCheck; //Wieder zur Benutzereingabe Fals der Wert unter 0 war
    }

    cRadius = cDiameter / 2; //Radius berechnen
    cArea = cRadius * cRadius * pi; //Mit Kreisflächenformel rechnen
    printf("Die Fl\x84""che deines Kreises betr\x84gt: %lf\n", cArea); //Fläche des Kreises ausgeben
    return 0;
}

double square() { //Quadratflächenberechnung
    double sSquare;
    double aSquare;
    squareCheck:
    printf("Gib die Seitenl\x84nge deines Quadrates an: \n");
    while (scanf("%lf%*[0-9]", &sSquare) != 1) { //Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (sSquare < 0) { //Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto squareCheck; //Wieder zur Benutzereingabe Fals der Wert unter 0 war
    }

    aSquare = sSquare * sSquare; //Flächenberechnung
    printf("Die Fl\x84""che deines Qudrates betr\x84gt: %lf\n", aSquare); //Ausgabe des Resultates
    return 0;
}

double rectangle() { //Rechteckflächenberechnung
    double sRectangleA;
    double sRectangleB;
    double aRectangle;
    rACheck:
    printf("Gib die l\x84nge deines Rechtecks an: \n");
    while (scanf("%lf%*[0-9]", &sRectangleA) != 1) {//Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (sRectangleA < 0) { //Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto rACheck;//Wieder zur Benutzereingabe Fals der Wert unter 0 war
    }

    rBCheck:
    printf("Gib die breite deines Rechtecks an: \n");
    while (scanf("%lf%*[0-9]", &sRectangleB) != 1) { //Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (sRectangleB < 0) {//Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto rBCheck;//Wieder zur Benutzereingabe Fals der Wert unter 0 war
    }

    aRectangle = sRectangleA * sRectangleB; //Berechnung der Fläche
    printf("Die Fl\x84""che deines Rechtecks betr\x84gt: %lf\n", aRectangle); //Ausgabe
    return 0;
}

double triangle() {
    double gTriangle;
    double hTriangle;
    double aTriangle;
    gCheck:
    printf("Gib die Grundseite des Dreiecks ein: \n");
    while (scanf("%lf%*[0-9]", &gTriangle) != 1) {//Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (gTriangle < 0) {//Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto gCheck;//Wieder zur Benutzereingabe Fals der Wert unter 0 war
    }

    hCheck:
    printf("Gib die H\x94he deines Dreiecks an: \n");
    while (scanf("%lf%*[0-9]", &hTriangle) != 1) {//Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (hTriangle < 0) {//Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto hCheck;//Wieder zur Benutzereingabe Fals der Wert unter 0 war
    }

    aTriangle = gTriangle * hTriangle / 2; //Flächenberechung eines Dreiecks
    printf("Die Fl\x84""che deines Dreiecks betr\x84gt: %lf\n", aTriangle); //Ausgabe
    return 0;
}

double trapezoid() {
    double trapezoidGroundLine;
    double trapezTopLine;
    double trapezoidHeight;
    double trapezoid;

    gTrapezoid:
    printf("Gib die L\x84nge der Grundlinie deines Trapez an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezoidGroundLine) != 1) {//Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (trapezoidGroundLine < 0) {//Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto gTrapezoid;//Wieder zur Benutzereingabe Fals der Wert unter 0 war

    }

    dCheck:
    printf("Gib die L\x84nge der Deckenlinie deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezTopLine) != 1) {//Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (trapezTopLine < 0) {//Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto dCheck;//Wieder zur Benutzereingabe Fals der Wert unter 0 war

    }

    hCheck:
    printf("Gib die H\x94he deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezoidHeight) != 1) {//Benutzereingabe
        error1();//Falls die Einageb nicht nummerisch war, wird der Benutzer wieder gefragt
    }

    if (trapezoidHeight < 0) {//Fals der Wert nicht grösser über 0 ist
        error2();//Flush
        goto hCheck;//Wieder zur Benutzereingabe Fals der Wert unter 0 war
    }
    trapezoid = ((trapezoidGroundLine + trapezTopLine) / 2) * trapezoidHeight; //Flächenberechnung des Trapezs
    printf("Das Volumen deines Trapez ist: %lf cm^3\n", trapezoid); //Ausgabe
    return 0;
}
