//
// Created by kumme on 08.12.2021.
//

#include "basecalc.h"

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>


double sum() {

    double a = 0;
    double b = 0;
    double x = 0;

    printf("Geben Sie den ersten Summanden ein:\n");
    while (scanf("%lf%*[0-9]",  &a) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    printf("Geben Sie den zweiten Summanden ein:\n");
    while (scanf("%lf%*[0-9]",  &b) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    x = a+b;

    printf("Das Ergebnis lautet: %lf\n", x);
    
    return x;
}

double sub() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;


    printf("Geben Sie den Minuenden ein:\n");
    while (scanf("%lf%*[0-9]",  &a) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    printf("Geben Sie den Subtrahenden ein:\n");
    while (scanf("%lf%*[0-9]",  &b) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    x = a-b;
    
    printf("Das Ergebnis lautet: %lf\n", x);
    
    return x;
}

double divi() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den Dividended ein:\n");
    while (scanf("%lf%*[0-9]",  &a) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }
    
    printf("Geben Sie den Divisor ein:\n");
    while (scanf("%lf%*[0-9]",  &b) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    if(b == 0){
        printf("Fehler, die Zahl kann nicht durch 0 geteilt werden!");
    }else {
        x = a/b;
    }
    
    printf("Das Ergebnis lautet: %lf\n", x);
    
    return x;
}

double mult() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den Multiplikator ein:\n");
    while (scanf("%lf%*[0-9]",  &a) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    printf("Geben Sie den Multiplikanden ein:\n");
    while (scanf("%lf%*[0-9]",  &b) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    x = a*b;
    
    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}

double expo() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie die Basis ein:\n");
    while (scanf("%lf%*[0-9]",  &a) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    printf("Geben Sie den Exponenten ein:\n");
    while (scanf("%lf%*[0-9]",  &b) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    x = a;

    if(b == 0){
        x = 1;
    }else {
        for(b; b > 1; b--){
            x = a*x;
        }
    }
    
    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}

double wurz() {

    double a = 0.00;
    double b = 0.00;
    double x = 1.00;

    printf("Geben Sie den Radikanden ein:\n");
    while (scanf("%lf%*[0-9]",  &a) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    while (1)
    {
        b = b + 1;
        x = (a / x + x) / 2;
        if (b == a + 1) { break; }
    }
    
    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}

double fak() {

    double a = 0.00;
    double x = 1.00;

    printf("Geben Sie den Fakultätswert ein:\n");
    while (scanf("%lf%*[0-9]",  &a) != 1){
        printf("Falsche Eingabe! Versuche es erneut\n");
        while (!feof(stdin) && fgetc(stdin) != '\n');
    }

    for(a; a > 0; a--){
        x=a*x;
    }
    
    printf("Das Ergebnis lautet: %lf\n", x);

    return x;
}