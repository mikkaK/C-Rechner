//
// Created by kumme on 08.12.2021.
//

#include "3D.h"
#include <stdio.h>

#define pi 3.1415926

double sphere() {
    double sphered;
    double sphereRadius;
    double sphere;
    inputsphere:
    printf("Gib den Durchmesser deines Kugel an: \n");
    while (1 != scanf("%lf%*[0-9]%*[^-]", &sphered)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if (sphered > 0) {
        sphereRadius = sphered / 2;
        sphere = 4.0 / 3.0 * pi * ((sphereRadius * sphereRadius) * sphereRadius);
        printf("Das Volumen deiner Kugel ist: %lf\n", sphere);
    } else {
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputsphere;
    }
    return 0;
}

double dice() {
    double sitel;
    double dice;
    inputdice:
    printf("Gib die Seitenl\x84nge deines W\x81rfels an: \n");
    while (1 != scanf("%lf%*[0-9]", &sitel)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if (sitel > 0) {
        dice = ((sitel * sitel) * sitel);
        printf("Das Volumen deines W\x81rfels ist: %lf\n", dice);
    } else {
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputdice;

    }
    return 0;
}

double cuboid() {
    double sitelenght1;
    double sitelenght2;
    double sitelenght3;
    double cuboid;
    inputcuboid:
    printf("Gib die erste Seitenl\x84nge deines Quaders an: \n");
    while (1 != scanf("%lf%*[0-9]", &sitelenght1)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib die zweite Seitenl\x84nge deines Quaders an: \n");
    while (1 != scanf("%lf%*[0-9]", &sitelenght2)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    printf("Gib die dritte Seitenl\x84nge deines Quaders an: \n");
    while (1 != scanf("%lf%*[0-9]", &sitelenght3)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if (sitelenght1 > 0 && sitelenght2 > 0 && sitelenght3 > 0) {
        cuboid = ((sitelenght1 * sitelenght2) * sitelenght3);
        printf("Das Volumen deines Quaders ist: %lf\n", cuboid);
    } else {
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcuboid;

    }
    return 0;
}

double cylinder() {
    double cylinderd;
    double cylinderh;
    double cylinder;
    inputcylinder:
    printf("Gib den Durchmesser deines Zylinder an: \n");
    while (1 != scanf("%lf%*[0-9]", &cylinderd)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib die H\x94he deines Zylinder an: \n");
    while (1 != scanf("%lf%*[0-9]", &cylinderh)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if (cylinderh > 0 && cylinderd > 0) {
        cylinder = (cylinderd / 2 * pi) * cylinderh;
        printf("Das Volumen deines Zylinders ist: %lf\n", cylinder);
    } else {
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcylinder;
    }
    return 0;
}

double cone() {
    double coned;
    double coneh;
    double cone;
    inputcone:
    printf("Gib den Durchmesser deines Kegels an: \n");
    while (1 != scanf("%lf%*[0-9]", &coned)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib die Hoehe deines Kegels an: \n");
    while (1 != scanf("%lf%*[0-9]", &coneh)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if (coned > 0 && coneh > 0) {
        cone = (coned / 2 * pi) * (1.0 / 3.0) * coneh;
        printf("Das Volumen deines Kegels ist: %lf\n", cone);
    } else {
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcone;
    }
    return 0;
}





