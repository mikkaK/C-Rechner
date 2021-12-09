//
// Created by kumme on 08.12.2021.
//

#include "3D.h"
#include <stdio.h>

#define pi 3.1415926

double kugel() {
    double kugelDurchmesser;
    inputsphere:
    printf("Gib den Durchmesser deines Kugel an: \n");
    while (scanf("%lf%*[0-9]", &kugelDurchmesser) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
if(kugelDurchmesser > 0) {
    double kugelRadius = kugelDurchmesser / 2;
    double kugelArea = 4.0 / 3.0 * pi * ((kugelRadius * kugelRadius) * kugelRadius);
    printf("Das Volumen deiner Kugel ist: %lf\n", kugelArea);
}else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputsphere;
}
    return 0;
}

double wurfel() {
    double seitenlange;
    inputcube:
    printf("Gib die Seitenlaenge deines Wuerfels an: \n");
    while (scanf("%lf%*[0-9]", &seitenlange) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(seitenlange > 0) {
        double wurfel = ((seitenlange * seitenlange) * seitenlange);
        printf("Das Volumen deines Wuerfels ist: %lf\n", wurfel);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcube;

    }
    return 0;
}

double quader() {
    double seitenlang1;
    double seitenlang2;
    double seitenlang3;
    inputcuboid:
        printf("Gib die erste Seitenlaenge deines Quaders an: \n");
        while (scanf("%lf%*[0-9]", &seitenlang1) != 1) {
            printf("Falsche Eingabe! Versuche es erneut\n");
            while (!feof(stdin) && fgetc(stdin) != '\n');
        }

        printf("Gib die erste Seitenlaenge deines Quaders an: \n");
        while (scanf("%lf%*[0-9]", &seitenlang2) != 1) {
            printf("Falsche Eingabe! Versuche es erneut\n");
            while (!feof(stdin) && fgetc(stdin) != '\n');
        }

        printf("Gib die erste Seitenlaenge deines Quaders an: \n");
        while (scanf("%lf%*[0-9]", &seitenlang3) != 1) {
            printf("Falsche Eingabe! Versuche es erneut\n");
            while (!feof(stdin) && fgetc(stdin) != '\n');
        }
    if(seitenlang1 > 0 && seitenlang2 > 0 && seitenlang3 > 0) {
        double quader = ((seitenlang1 * seitenlang2) * seitenlang3);
        printf("Das Volumen deines Quaders ist: %lf\n", quader);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcuboid;

    }
    return 0;
}

double zylinder() {
    double zylinderDurchmesser;
    double zylinderHoehe;
    inputcylinder:
    printf("Gib den Durchmesser deines Zylinder an: \n");
    while (scanf("%lf%*[0-9]", &zylinderDurchmesser) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib die Hoehe deines Zylinder an: \n");
    while (scanf("%lf%*[0-9]", &zylinderHoehe) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(zylinderHoehe > 0 && zylinderDurchmesser > 0) {
        double zylinder = (zylinderDurchmesser / 2 * pi) * zylinderHoehe;
        printf("Das Volumen deines Zylinders ist: %lf\n", zylinder);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcylinder;
    }
    return 0;
}
double kegel() {
    double kegelDurchmesser;
    double kegelHoehe;
    inputcone:
    printf("Gib den Durchmesser deines Kegels an: \n");
    while (scanf("%lf%*[0-9]", &kegelDurchmesser) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib die Hoehe deines Kegels an: \n");
    while (scanf("%lf%*[0-9]", &kegelHoehe) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(kegelDurchmesser > 0 && kegelHoehe > 0) {
        double kegel = (kegelDurchmesser / 2 * pi) * (1.0 / 3.0) * kegelHoehe;
        printf("Das Volumen deines Kegels ist: %lf\n", kegel);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcone;
    }
    return 0;
}





