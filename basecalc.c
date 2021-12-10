//
// Created by kumme on 08.12.2021.
//

#include "basecalc.h"
#include "flush.h"

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <ctype.h>



double loop() {
    
    char c;
    double b = 0;
    
    fflush(stdin);
frage:
    printf("M\x94""chten Sie eine weitere Zahl hinzuf\x81gen: <Y>=JA <N>=NEIN\n");
    scanf("%c", &c);
    
    switch(toupper(c)){
        case 'Y':
            b = 0;
            break;

        case 'N':
            b = 1;
            break;

        default:
            printf("Keine g\x81ltige Eingabe!\n");
            goto frage;

    }
    
    return b;
}


double sum() {

    double a = 0;
    double b = 0;
    double x = 0;

    printf("Geben Sie den ersten Summanden ein:\n");
    while (1 != scanf("%lf%*[0-9]", &x)) {
        error1();
    }

    while(1 != b){
        
        printf("Geben Sie den n\x84""chsten Summanden ein:\n");
        while (1 != scanf("%lf%*[0-9]", &a)) {
            error1();
        }
        
        x = a + x;
        
        b = loop();
    }

    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}

double sub() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den Minuenden ein:\n");
    while (1 != scanf("%lf%*[0-9]", &x)) {
        error1();
    }
    
    while(1 != b){
        
        printf("Geben Sie den Subtrahenden ein:\n");
        while (1 != scanf("%lf%*[0-9]", &a)) {
            error1();
        }
        
        x = x - a;
        
        b = loop();
    }

    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}

double divi() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den Dividended ein:\n");
    while (1 != scanf("%lf%*[0-9]", &x)) {
        error1();
    }
    
    while(1 != b){
        
        fehler:
        printf("Geben Sie den Divisor ein:\n");
        while (1 != scanf("%lf%*[0-9]", &a)) {
            error1();
        }
        
        if (0 == a) {
            printf("Fehler, die Zahl kann nicht durch 0 geteilt werden!");
            goto fehler;
        } else {
            x = x / a;
        }
        
        b = loop();
    }
    
    printf("Das Ergebnis lautet: %lf\n", x);
    
    return x;
}

double mult() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den Multiplikator ein:\n");
    while (1 != scanf("%lf%*[0-9]", &x)) {
        error1();
    }
    
    while(1 != b){
        
        printf("Geben Sie den Multiplikanden ein:\n");
        while (1 != scanf("%lf%*[0-9]", &a)) {
            error1();
        }
        
        x = x * a;
        
        b = loop();
    }

    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}

double expo() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie die Basis ein:\n");
    while (1 != scanf("%lf%*[0-9]", &a)) {
        error1();
    }

    printf("Geben Sie den Exponenten ein:\n");
    while (1 != scanf("%lf%*[0-9]", &b)) {
        error1();
    }

    x = a;

    if (0 == b) {
        x = 1;
    } else {
        for (b; b > 1; b--) {
            x = a * x;
        }
    }

    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}

double wurz() {

    double a = 0.00;
    double b = 0.00;
    double c = 0.00;
    double x = 1.00;

    printf("Geben Sie den Radikanden ein:\n");
    while (1 != scanf("%lf%*[0-9]", &a)) {
        error1();
    }

    if (a < 0) {

        c = 2 * a;
        a = a - c;

        while (1) {
            b = b + 1;
            x = (a / x + x) / 2;
            if (a + 1 == b) { break; }
        }

        printf("Das Ergebnis lautet: %lfi\n", x);

    } else {

        while (1) {
            b = b + 1;
            x = (a / x + x) / 2;
            if (a + 1 == b) { break; }
        }
        printf("Das Ergebnis lautet: %lf\n", x);
    }

    return x;
}

double fak() {

    double a = 0.00;
    double x = 1.00;

    printf("Geben Sie den Fakultätswert ein:\n");
    while (1 != scanf("%lf%*[0-9]", &a)) {
        error1();
    }

    for (a; a > 0; a--) {
        x = a * x;
    }

    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}
