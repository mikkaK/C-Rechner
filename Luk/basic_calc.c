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
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    x = a+b;
    
    return x;
}

double sub() {
    
    double a = 0.00;
    double b = 0.00;
    double x = 0.00;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    x = a-b;
    
    return x;
}

double divi() {
    
    double a = 0.00;
    double b = 0.00;
    double x = 0.00;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    if(b == 0){
        printf("Error, cant divide by 0!");
    }else {
        x = a/b;
    }
    
    return x;
}

double mult() {
    
    double a = 0.00;
    double b = 0.00;
    double x = 0.00;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    x = a*b;
    
    return x;
}

double expo() {
    
    double a = 0.00;
    double b = 0.00;
    double x = 0.00;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
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
    double c = 0.00;
    double x = 0.00;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    if(b == 0){
        printf("Error, can't get root 0!");
    }else {
        
        c = 1/b; 
        x = a;
        
        for(b; b > 1; b--){
            x = a*x;
        }
    }
    
    return x;
}

double fak() {
    
    double a = 0.00;
    double x = 1.00;
    
    scanf("%lf", &a);
    
    for(a; a > 0; a--){
        x=a*x;
    }
    
    return x;
}

