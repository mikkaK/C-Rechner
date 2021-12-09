
#include "lifescience.h"
#include <stdio.h>

double bmi() {
    double grosse;
    double gewicht;
    inputbmi:
    printf("Gib deine aktuelle Gr\x94sse in m an: \n");
    while ( 1 !=scanf("%lf%*[0-9]", &grosse)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &gewicht)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(grosse > 0 && gewicht > 0) {
        double bmi = (gewicht / (grosse * grosse));
        printf("Dein BMI ist: %lf\n", bmi);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputbmi;
    }

    return 0;
}

double alk() {
    double alkInGramm;
    double gewicht;
    double faktor;
    char r;

    gesch: printf("Geben sie ihr Geschlecht an: F / M \n");
    scanf("%c", &r);
    while (!feof(stdin) && fgetc(stdin) != '\n');
    if(r == 'f' || r == 'F'){
        faktor = 0.6;
    }else if(r == 'm' || r == 'M'){
        faktor = 0.7;
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto gesch;
    }
    inputalk:
    printf("Gib deinen aktuellen Alkoholwert an (in Gramm): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &alkInGramm)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while (1 !=scanf("%lf%*[0-9]", &gewicht)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(alkInGramm > 0 && gewicht > 0) {
        double alk = (alkInGramm / (gewicht * faktor));
        printf("Dein Alkoholgehalt ist: %lf Promille\n", alk);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputalk;
    }
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
    if(r == 'f' || r == 'F'){
        faktor = 655.1;
        faktor2 = 9.6;
        faktor3 = 1.8;
        faktor4 = 4.7;
    }else if(r == 'm' || r =='M'){
        faktor = 66.47;
        faktor2 = 13.7;
        faktor3 = 5;
        faktor4 = 6.8;
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto gesch;
    }
    inputkalorien:
    printf("Gib dein aktuelles Alter an : \n");
    while ( 1 != scanf("%lf%*[0-9]", &alter)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &gewicht)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib deine aktuelle Gr\x94sse an (in cm): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &grosse)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(alter > 0 && grosse > 0 && gewicht > 0) {
        double kalorienBedarf = (faktor + (faktor2 * gewicht) + (faktor3 * grosse) - (faktor4 * alter));
        printf("Dein t\x84glicher Kalorienbedarf ist: %lf Kalorien\n", kalorienBedarf);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputkalorien;
    }
    return 0;
}

