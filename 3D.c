//
// Created by kumme on 08.12.2021.
//

#include "flush.h"
#include "3D.h"
#include <stdio.h>

#define pi 3.1415926

double sphere() {
    double sphered;
    double sphereRadius;
    double sphere;
    inputsphere:
    printf("Gib den Durchmesser deines Kugel an: \n");
    while (1 != scanf("%lf%*[0-9]", &sphered)) {
        error1();
    }
    if (sphered > 0) {
        sphereRadius = sphered / 2;
        sphere = 4.0 / 3.0 * pi * ((sphereRadius * sphereRadius) * sphereRadius);
        printf("Das Volumen deiner Kugel ist: %2.lf\n", sphere);
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
        error1();
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
        error1();
    }
    printf("Gib die zweite Seitenl\x84nge deines Quaders an: \n");
    while (1 != scanf("%lf%*[0-9]", &sitelenght2)) {
        error1();
    }

    printf("Gib die dritte Seitenl\x84nge deines Quaders an: \n");
    while (1 != scanf("%lf%*[0-9]", &sitelenght3)) {
        error1();
    }
    if (sitelenght1 > 0 && sitelenght2 > 0 && sitelenght3 > 0) {
        cuboid = ((sitelenght1 * sitelenght2) * sitelenght3);
        printf("Das Volumen deines Quaders ist: %2.lf\n", cuboid);
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
        error1();
    }
    printf("Gib die H\x94he deines Zylinder an: \n");
    while (1 != scanf("%lf%*[0-9]", &cylinderh)) {
        error1();
    }
    if (cylinderh > 0 && cylinderd > 0) {
        cylinder = (((cylinderd / 2) * (cylinderd / 2)) * pi) * cylinderh;
        printf("Das Volumen deines Zylinders ist: %2.lf\n", cylinder);
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
        error1();
    }
    printf("Gib die Hoehe deines Kegels an: \n");
    while (1 != scanf("%lf%*[0-9]", &coneh)) {
        error1();
    }
    if (coned > 0 && coneh > 0) {
        cone = (coned / 2 * pi) * (1.0 / 3.0) * coneh;
        printf("Das Volumen deines Kegels ist: %2.lf\n", cone);
    } else {
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcone;
    }
    return 0;
}





