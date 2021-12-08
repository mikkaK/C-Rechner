#include <stdio.h>

#define pi 3.1415926

double kugel() {
    double kugelDurchmesser;
    printf("Gib den Durchmesser deines Kugel an: \n");
    while (scanf("%lf%*[0-9]", &kugelDurchmesser) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    double kugelRadius = kugelDurchmesser / 2;
    double kugelArea = 4.0 / 3.0 * pi * ((kugelRadius * kugelRadius) * kugelRadius);
    printf("Das Volumen deiner Kugel ist: %lf\n", kugelArea);

    return 0;
}

double wurfel() {
    double seitenlange;
    printf("Gib die Seitenlaenge deines Wuerfels an: \n");
    while (scanf("%lf%*[0-9]", &seitenlange) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    double wurfel = ((seitenlange * seitenlange) * seitenlange);
    printf("Das Volumen deines Wuerfels ist: %lf\n", wurfel);

    return 0;
}

double quader() {
    double seitenlang1;
    double seitenlang2;
    double seitenlang3;
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

    double quader = ((seitenlang1 * seitenlang2) * seitenlang3);
    printf("Das Volumen deines Quaders ist: %lf\n", quader);

    return 0;
}

double zylinder() {
    double zylinderDurchmesser;
    double zylinderHoehe;
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
    double zylinder = (zylinderDurchmesser/2*pi)*zylinderHoehe;
    printf("Das Volumen deines Zylinders ist: %lf\n", zylinder);

    return 0;
}

double kegel() {
    double kegelDurchmesser;
    double kegelHoehe;
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
    double kegel = (kegelDurchmesser / 2 * pi)* (1.0/3.0) * kegelHoehe;
    printf("Das Volumen deines Kegels ist: %lf\n", kegel);

    return 0;
}


int main() {
    kugel();
    wurfel();
    quader();
    zylinder();
    kegel();

}




