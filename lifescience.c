
#include "lifescience.h"
#include <stdio.h>


double bmi() {
    double hight;
    double weight;
    double bmi;
    inputbmi:
    printf("Gib deine aktuelle Gr\x94sse in m an: \n");
    while ( 1 !=scanf("%lf%*[0-9]", &hight)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &weight)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(hight > 0 && weight > 0) {
        bmi = (weight / (hight * hight));
        printf("Dein BMI ist: %2.lf\n", bmi);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputbmi;
    }

    return 0;
}


double alc() {
    double alkg;
    double weight;
    double factor;
    char r;
    double alk;
    gesch: printf("Geben sie ihr Geschlecht an: F / M \n");
    scanf("%c", &r);
    while (!feof(stdin) && fgetc(stdin) != '\n');
    if(r == 'f' || r == 'F'){
        factor = 0.6;
    }else if(r == 'm' || r == 'M'){
        factor = 0.7;
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto gesch;
    }
    inputalk:
    printf("Gib deinen aktuellen Alkoholwert an (in Gramm): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &alkg)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while (1 !=scanf("%lf%*[0-9]", &weight)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if(alkg > 0 && weight > 0) {
        alk = (alkg / (weight * factor));
        printf("Dein Alkoholgehalt ist: %lf Promille\n", alk);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputalk;
    }
    return 0;
}

double calorie() {
    double age;
    double weight;
    double height;
    double factor;
    double factor2;
    double factor3;
    double factor4;
    double dailycal;
    char r;
    gesch: printf("Geben sie ihr Geschlecht an: F / M \n");
    scanf("%c", &r);
    if(r == 'f' || r == 'F'){
        factor = 655.1;
        factor2 = 9.6;
        factor3 = 1.8;
        factor4 = 4.7;
    }else if(r == 'm' || r =='M'){
        factor = 66.47;
        factor2 = 13.7;
        factor3 = 5;
        factor4 = 6.8;
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto gesch;
    }
    inputcalories:
    printf("Gib dein aktuelles Alter an : \n");
    while ( 1 != scanf("%lf%*[0-9]", &age)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib dein aktuelles Gewicht an (in Kg): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &weight)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    printf("Gib deine aktuelle Gr\x94sse an (in cm): \n");
    while ( 1 !=scanf("%lf%*[0-9]", &height)) {
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    if(age > 0 && height > 0 && weight > 0) {
        dailycal = (factor + (factor2 * weight) + (factor3 * height) - (factor4 * age));
        printf("Dein t\x84glicher Kalorienbedarf ist: %2.lf Kalorien\n", dailycal);
    }else{
        printf("Falsche Eingabe! Versuche es erneut\n");
        goto inputcalories;
    }
    return 0;
}

