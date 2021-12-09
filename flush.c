//
// Created by cedzo on 09.12.2021.
//

#include "flush.h"
#include <stdio.h>

char error1(){
    printf("Falsche Eingabe! Versuche es erneut\n");
    while (!feof(stdin) && fgetc(stdin) != '\n');
    return 0;
}

char error2(){
    printf("Eingabe darf nicht kleiner als 0 sein\n");
    while (!feof(stdin) && fgetc(stdin) != '\n');
    return 0;
}