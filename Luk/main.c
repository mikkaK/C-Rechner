/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: luksc
 *
 * Created on 8. Dezember 2021, 10:47
 */

#include <stdio.h>
#include <stdlib.h>
#include "handler.h"

/*
 * 
 */
int main(int argc, char** argv) {

    double result = 0.00;
    
    
    result = sum();
    
    printf("%lf\n", result);
    
    
    
    return (EXIT_SUCCESS);
}

