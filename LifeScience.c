#include <stdio.h>

double bmi() {
    double grosse;
    double gewicht;
    printf("Gib deine aktuelle Groesse in m an: \n");
    while (scanf("%lf%*[0-9]", &grosse) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while (scanf("%lf%*[0-9]", &gewicht) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    double bmi = (gewicht / (grosse * grosse));
    printf("Dein BMI ist: %lf\n", bmi);

    return 0;
}

double alk() {
    double alkInGramm;
    double gewicht;
    double faktor;
    char r;
    gesch: printf("Geben sie ihr Geschlecht an: F / M \n");
    scanf("%c", &r);
    if(r == 'f' || 'F'){
        faktor = 0.6;
    }else if(r == 'm' || 'M'){
        faktor = 0.7;
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto gesch;
    }
    printf("Gib deinen aktuellen Alkoholwert an (in Gramm): \n");
    while (scanf("%lf%*[0-9]", &alkInGramm) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while (scanf("%lf%*[0-9]", &gewicht) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    double bmi = (alkInGramm/ (gewicht * faktor));
    printf("Dein Alkoholgehalt ist: %lf Promille\n", bmi);

    return 0;
}

double kalorien() {
    double alter;
    double gewicht;
    double grosse;
    double faktor;
    double faktor2;
    double faktor3;
    double faktor4;
    char r;
    gesch: printf("Geben sie ihr Geschlecht an: F / M \n");
    scanf("%c", &r);
    if(r == 'f' || 'F'){
        faktor = 655.1;
        faktor2 = 9.6;
        faktor3 = 1.8;
        faktor4 = 4.7;
    }else if(r == 'm' || 'M'){
        faktor = 66.47;
        faktor2 = 13.7;
        faktor3 = 5;
        faktor4 = 6.8;
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto gesch;
    }
    printf("Gib dein aktuelles Alter an : \n");
    while (scanf("%lf%*[0-9]", &alter) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while (scanf("%lf%*[0-9]", &gewicht) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib deine aktuelle Groesse an (in cm): \n");
    while (scanf("%lf%*[0-9]", &grosse) != 1) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    double kalorienBedarf = (faktor +(faktor2 * gewicht)+(faktor3 * grosse)-(faktor4 * alter ));
    printf("Dein taeglicher Kalorienbedarf ist: %lf Kalorien\n", kalorienBedarf);

    return 0;
}
