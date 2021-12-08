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

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den ersten Summanden ein:\n");
    scanf("%lf", &a);
    system("cls");

    printf("Geben Sie den zweiten Summanden ein:\n");
    scanf("%lf", &b);
    system("cls");

    x = a+b;

    return x;
}

double sub() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;


    printf("Geben Sie den Minuenden ein:\n");
    scanf("%lf", &a);
    system("cls");

    printf("Geben Sie den Subtrahenden ein:\n");
    scanf("%lf", &b);
    system("cls");

    x = a-b;

    return x;
}

double divi() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den Dividended ein:\n");
    scanf("%lf", &a);
    system("cls");

    printf("Geben Sie den Divisor ein:\n");
    scanf("%lf", &b);
    system("cls");

    if(b == 0){
        printf("Fehler, die Zahl kann nicht durch 0 geteilt werden!");
    }else {
        x = a/b;
    }

    return x;
}

double mult() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie den Multiplikator ein:\n");
    scanf("%lf", &a);
    system("cls");

    printf("Geben Sie den Multiplikanden ein:\n");
    scanf("%lf", &b);
    system("cls");

    x = a*b;

    return x;
}

double expo() {

    double a = 0.00;
    double b = 0.00;
    double x = 0.00;

    printf("Geben Sie die Basis ein:\n");
    scanf("%lf", &a);
    system("cls");

    printf("Geben Sie den Exponenten ein:\n");
    scanf("%lf", &b);
    system("cls");

    x = a;

    if(b == 0){
        x = 1;
    }else {
        for(b; b > 1; b--){
            x = a*x;
        }
    }

    return x;
}

double wurz() {

    double a = 0.00;
    double b = 0.00;
    double x = 1.00;

    printf("Geben Sie den Radikanden ein:\n");
    scanf("%lf", &a);
    system("cls");

    while (1)
    {
        b = b + 1;
        x = (a / x + x) / 2;
        if (b == a + 1) { break; }
    }

    return x;
}

double fak() {

    double a = 0.00;
    double x = 1.00;

    printf("Geben Sie den Fakultätswert ein:\n");
    scanf("%lf", &a);
    system("cls");

    for(a; a > 0; a--){
        x=a*x;
    }

    return x;
}