#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include "2D.h"
#include "3D.h"
#include "lifescience.h"
#include "basecalc.h"

#define MAX_LEN 128

unsigned int lena = 0;

float newa;

void print_image(FILE *fptr);

int checker(char *a, int n);

void switche(int n);

int cont();

int main() {
    int n;
    char buffer[101];

    int weiter = 0;
    while (0 == weiter) {

        //welcome message
        char *filename = "image.txt";
        FILE *fptr = NULL;
        if ((fptr = fopen(filename, "r")) == NULL) {
            fprintf(stderr, "error opening %s\n", filename);
            return 1;
        }
        print_image(fptr);
        fclose(fptr);

        n = 0;

        printf("*************\n");
        printf(" NYP, 2021\n");
        printf(" mk/cz/ls/js\n");
        printf("*************\n");
        printf("\n");
        printf("\tMENU: \n");
        printf(" -------------------------------\n");
        printf("| 1 - Basic Rechnungen\t\t|\n");
        printf("| 2 - 2D Formen berechnen\t|\n");
        printf("| 3 - 3D Formen berechnen\t|\n");
        printf("| 4 - Life Science\t\t|\n");
        printf(" -------------------------------\n");

        printf("\n");

        //input
        fflush(stdin);
        printf("W\x84hle weise: ");
        scanf("%100[^\n]", buffer);
        fflush(stdin);
        char *a = (char *) malloc(strlen(buffer) + 1);
        strcpy(a, buffer);
        printf("\n");

        n = checker(a, n);

        switche(n);

        weiter = cont();

    }
    return 0;
}

void print_image(FILE *fptr) {
    char read_string[MAX_LEN];

    while (fgets(read_string, sizeof(read_string), fptr) != NULL)
        printf("%s", read_string);
}

int checker(char *a, int n) {
    lena = strlen(a);
    char buffer[101];
    int newchosen;


    for (int i = 0; i < lena;) {
        if (a[i] < 0) {
            n = 1;
            return n;
        } else if (!isdigit(a[i])) {
            n = 2;
            return n;
        }
        ++i;
    }

    if (1 != n && 2 != n) {
        newa = (float) strtod(a, NULL);
        if ( 1 == newa) {
            printf("\n");
            printf("Basic Rechnungen: \n");
            printf(" \t ----------------------- \n");
            printf("\t| 1 - Summieren\t\t|\n");
            printf("\t| 2 - Subtrahieren\t|\n");
            printf("\t| 3 - Dividieren\t|\n");
            printf("\t| 4 - Multiplizieren\t|\n");
            printf("\t| 5 - Exponent\t\t|\n");
            printf("\t| 6 - Wurzel\t\t|\n");
            printf("\t| 7 - Fakultativ\t|\n");
            printf(" \t ----------------------- \n");
            printf("\n");


            fflush(stdin);
            printf("W\x84hle weise: ");
            scanf("%100[^\n]", buffer);
            fflush(stdin);
            char *b = (char *) malloc(strlen(buffer) + 1);
            strcpy(b, buffer);
            printf("\n");
            newchosen = (int) strtod(b, NULL);
            switch (newchosen) {
                case 1:
                    n = 3;
                    return n;
                case 2:
                    n = 4;
                    return n;
                case 3:
                    n = 5;
                    return n;
                case 4:
                    n = 6;
                    return n;
                case 5:
                    n = 7;
                    return n;
                case 6:
                    n = 8;
                    return n;
                case 7:
                    n = 9;
                    return n;
                default:
                    n = 1;
                    return n;
            }
        } else if (2 == newa) {
            printf("\n");
            printf("2D FORMEN: \n");
            printf("\t --------------- \n");
            printf("\t| 1 - Kreis\t|\n");
            printf("\t| 2 - Quadrat\t|\n");
            printf("\t| 3 - Rechteck\t|\n");
            printf("\t| 4 - Dreieck\t|\n");
            printf("\t| 5 - Trapez\t|\n");
            printf("\t --------------- \n");

            fflush(stdin);
            printf("W\x84hle weise: ");
            scanf("%100[^\n]", buffer);
            fflush(stdin);
            char *b = (char *) malloc(strlen(buffer) + 1);
            strcpy(b, buffer);
            printf("\n");
            newchosen = (int) strtod(b, NULL);
            switch (newchosen) {
                case 1:
                    n = 10;
                    return n;
                case 2:
                    n = 11;
                    return n;
                case 3:
                    n = 12;
                    return n;
                case 4:
                    n = 13;
                    return n;
                case 5:
                    n = 14;
                    return n;
                default:
                    n = 1;
                    return n;
            }
        } else if (3 == newa) {
            printf("\n");
            printf("3D FORMEN: \n");
            printf("\t ---------------\n");
            printf("\t| 1 - Kugel\t|\n");
            printf("\t| 2 - Wuerfel\t|\n");
            printf("\t| 3 - Quader\t|\n");
            printf("\t| 4 - Zylinder\t|\n");
            printf("\t| 5 - Kegel\t|\n");
            printf("\t ---------------\n");

            fflush(stdin);
            printf("W\x84hle weise: ");
            scanf("%100[^\n]", buffer);
            fflush(stdin);
            char *b = (char *) malloc(strlen(buffer) + 1);
            strcpy(b, buffer);
            printf("\n");
            newchosen = (int) strtod(b, NULL);

            switch (newchosen) {
                case 1:
                    n = 15;
                    return n;
                case 2:
                    n = 16;
                    return n;
                case 3:
                    n = 17;
                    return n;
                case 4:
                    n = 18;
                    return n;
                case 5:
                    n = 19;
                    return n;
                default:
                    n = 1;
                    return n;
            }

        } else if (4 == newa) {
            printf("\n");
            printf("Life Science: \n");
            printf(" \t ------------------------------- \n");
            printf("\t| 1 - BMI Rechner\t\t|\n");
            printf("\t| 2 - Alkoholgehalts Rechner\t|\n");
            printf("\t| 3 - Kalorienbedarf Rechner\t|\n");
            printf(" \t ------------------------------- \n");
            printf("\n");


            fflush(stdin);
            printf("W\x84hle weise: ");
            scanf("%100[^\n]", buffer);
            fflush(stdin);
            char *b = (char *) malloc(strlen(buffer) + 1);
            strcpy(b, buffer);
            printf("\n");
            newchosen = (int) strtod(b, NULL);
            switch (newchosen) {
                case 1:
                    n = 20;
                    return n;
                case 2:
                    n = 21;
                    return n;
                case 3:
                    n = 22;
                    return n;
                default:
                    n = 1;
                    return n;
            }
        } else {
            printf("Ung\x81ltige Eingabe\n");
        }
    }
    return n;

}

void switche(int n) {
    switch (n) {
        case 1:
            printf("------------------------------------------------------\n");
            printf("ERROR: \t\t");
            printf("Diese Zahl ist nicht g\x81ltig!\n");
            printf("------------------------------------------------------\n");
            break;

        case 2:
            printf("------------------------------------------------------\n");
            printf("ERROR: \t\t");
            printf("Deine Eingabe ist keine Zahl!\n");
            printf("------------------------------------------------------\n");
            break;

        case 3:
            system("cls");
            fflush(stdin);
            sum();
            break;

        case 4:
            system("cls");
            fflush(stdin);
            sub();
            break;

        case 5:
            system("cls");
            fflush(stdin);
            divi();

            break;

        case 6:
            system("cls");
            fflush(stdin);
            mult();
            break;

        case 7:
            system("cls");
            fflush(stdin);
            expo();
            break;

        case 8:
            system("cls");
            fflush(stdin);
            wurz();
            break;

        case 9:
            system("cls");
            fflush(stdin);
            fak();
            break;
        case 10:
            system("cls");
            fflush(stdin);
            circle();
            break;
        case 11:
            system("cls");
            fflush(stdin);
            square();
            break;
        case 12:
            system("cls");
            fflush(stdin);
            rectangle();
            break;
        case 13:
            system("cls");
            fflush(stdin);
            triangle();
            break;
        case 14:
            system("cls");
            fflush(stdin);
            trapez();
            break;
        case 15:
            system("cls");
            fflush(stdin);
            kugel();
            break;
        case 16:
            system("cls");
            fflush(stdin);
            wurfel();
            break;
        case 17:
            system("cls");
            fflush(stdin);
            quader();
            break;
        case 18:
            system("cls");
            fflush(stdin);
            zylinder();
            break;
        case 19:
            system("cls");
            fflush(stdin);
            kegel();
            break;
        case 20:
            system("cls");
            fflush(stdin);
            bmi();
            break;
        case 21:
            system("cls");
            fflush(stdin);
            alk();
            break;
        case 22:
            system("cls");
            fflush(stdin);
            kalorien();
            break;
        default:
            break;

    }

}

int cont() {
    char buffer[101];
    char str2[] = "w";
    char str1[] = "b";
    int weiter;
    int no;
    do {
        printf("\n");
        printf("\t ---------------\n");
        printf("\t| <b> beenden?\t|\n");
        printf("\t| <w> weiter?\t|\n");
        printf("\t ---------------\n");
        fflush(stdin);
        scanf("%100[^\n]", buffer);
        char *y = (char *) malloc(strlen(buffer) + 1);
        strcpy(y, buffer);

        no = 0;
        weiter = strcmp(y, str2);
        if ( 0 != strcmp(y, str2)) {
            if ( 0 != strcmp(y, str1)) {
                printf("ERROR: ung\x81ltige Eingabe\n");
                no = 1;
            }
        } else if ( 0 == strcmp(y, str1)) {
            exit(0);
        } else {
            no = 0;
        }
        system("cls");
    } while ( 0 != no);
    return weiter;//loop
}
