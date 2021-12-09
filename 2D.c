//
// Created by kumme on 08.12.2021.
//

#include "2D.h"
#include <stdio.h>
#define pi 3.1415926

double circle(){
    double kDiameter;
    printf("Gib den Durchmesser deines Kreises an: \n");
    while (scanf("%lf%*[0-9]",  &kDiameter) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    double kRadius = kDiameter / 2;
    double kArea = kRadius * kRadius * pi;
    printf("Die Fflaeche deines Kreises betraegt: %lf\n", kArea);
    return 0;
}

double square(){
    double sSquare;
    printf("Gib die Seitenlaenge deines Quadrates an: \n");
    while (scanf("%lf%*[0-9]",  &sSquare) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    double aSquare = sSquare * sSquare;
    printf("Die Flaeche deines Qudrates betraegt: %lf\n", aSquare);
    return 0;
}

double rectangle(){
    double sRectangleA;
    printf("Gib die laenge deines Rechtecks an: \n");
    while (scanf("%lf%*[0-9]",  &sRectangleA) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    double sRectangleB;
    printf("Gib die breite deines Rechtecks an: \n");
    while (scanf("%lf%*[0-9]",  &sRectangleB) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    double aRectangle = sRectangleA * sRectangleB;
    printf("Die Flaeche deines Rechtecks betraegt: %lf\n", aRectangle);
    return 0;
}

double triangle() {
    double gTriangle;
    printf("Gib die Grundseite des Dreiecks ein: \n");
    while (scanf("%lf%*[0-9]", &gTriangle) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');

    }
    double hTriangle;
    printf("Gib die Hoehe deines Dreiecks an: \n");
    while (scanf("%lf%*[0-9]", &hTriangle) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    double aTriangle = gTriangle * hTriangle / 2;

    printf("Die Flaeche deines Dreiecks betraegt: %lf\n", aTriangle);

}

double trapez(){
    double trapezGrundlinie;
    double trapezDeckenlinie;
    double trapezHoehe;
    printf("Gib die Laenge der Grundlinie deines Trapez an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezGrundlinie) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib die Laenge der Deckenlinie deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezDeckenlinie) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib die Hoehe deines Trapez an an (in cm): \n");
    while (scanf("%lf%*[0-9]", &trapezHoehe) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    double trapez = ((trapezGrundlinie + trapezDeckenlinie) / 2) * trapezHoehe;
    printf("Das Volumen deines Trapez ist: %lf cm^3\n", trapez);
    return 0;
}
