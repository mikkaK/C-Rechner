#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 128



int lena = 0;
int lenb = 0;
int lenc = 0;
float newa;
float newb;
float newc;

void print_image(FILE *fptr);

int checker(char *a, int n);

void switche(int n);

int cont();

int main() {
    int n;
    char buffer[101];
    char bufferb[101];
    char bufferc[101];
    int weiter = 0;
    while (weiter == 0) {

        //welcome message
        char *filename = "image.txt";
        FILE *fptr = NULL;
        if((fptr = fopen(filename,"r")) == NULL)
        {
            fprintf(stderr,"error opening %s\n",filename);
            return 1;
        }
        print_image(fptr);
        fclose(fptr);

        printf("NYP, 2021\n");
        printf("mk/cz/ls/js\n");
        printf("\n");
        printf("\tMENU: \n");
        printf("1 - Basic Rechnungen\n");
        printf("2 - 2D Formen berechnen\n");
        printf("3 - 3D Formen berechnen\n");
        printf("\n");

        //input
        fflush(stdin);
        printf("Waehle weise: ");
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

void print_image(FILE *fptr)
{
    char read_string[MAX_LEN];

    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);
}

int checker(char *a, int n) {
    lena = strlen(a);
    char buffer[101];
    int newchosen;


    for (int i = 0; i < lena;) {
        if  (a[i] < 0){
            n = 1;
            return n;
        } else if (!isdigit(a[i])) {
            n = 2;
            return n;
        }
        ++i;
    }
    //printf("%d", n);
    if (n != 1 && n != 2) {
        newa = (float) strtod(a, NULL);
                if (newa == 1){
                    printf("Basic Rechnungen: \n");
                    printf("\t 1 - Summieren\n");
                    printf("\t 2 - Subtrahieren\n");
                    printf("\t 3 - Dividieren\n");
                    printf("\t 4 - Multiplizieren\n");
                    printf("\t 5 - Exponent\n");
                    printf("\t 6 - Wurzel\n");
                    printf("\t 7 - Fakultativ\n");


                    fflush(stdin);
                    printf("Waehle weise: ");
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
                            n =6;
                            return n;
                        case 5:
                            n=7;
                            return n;
                        case 6:
                            n=8;
                            return n;
                        case 7:
                            n=9;
                            return n;
                        default:
                            n = 1;
                            return n;
                    }
                }
                else if (newa == 2){
                    printf("2D FORMEN: \n");
                    printf("\t 1 - Kreis\n");
                    printf("\t 2 - Quadrat\n");
                    printf("\t 3 - Rechteck\n");
                    printf("\t 4 - Dreieck\n");
                    printf("\t 5 - Trapez\n");

                    fflush(stdin);
                    printf("Waehle weise: ");
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
                            n =13;
                            return n;
                        case 5:
                            n=14;
                            return n;
                        default:
                            n = 1;
                            return n;
                    }
                }
                else if (newa == 3){
                    printf("3D FORMEN: \n");
                    printf("\t 1 - Kugel\n");
                    printf("\t 2 - Wuerfel\n");
                    printf("\t 3 - Quader\n");
                    printf("\t 4 - Zylinder\n");
                    printf("\t 5 - Kegel\n");

                    fflush(stdin);
                    printf("Waehle weise: ");
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
                            n =18;
                            return n;
                        case 5:
                            n=19;
                            return n;
                        default:
                            n = 1;
                            return n;
                    }

                }
                else{
                    printf("Ungueltige Eingabe\n");
                }
    }
    return n;

}

void switche(int n) {
    switch (n) {
        case 1:
            printf("------------------------------------------------------\n");
            printf("ERROR: \t\t");
            printf("Diese Zahl ist nicht gueltig!\n");
            printf("------------------------------------------------------\n");
            break;

        case 2:
            printf("------------------------------------------------------\n");
            printf("ERROR: \t\t");
            printf("Deine Eingabe ist keine Zahl!\n");
            printf("------------------------------------------------------\n");
            break;

        case 3:
            //Summieren
            break;

        case 4:
            //subtrahieren
            break;

        case 5:
            //Dividieren

            break;

        case 6:
            //Multiplizieren
            break;

        case 7:
            //Exponent
            break;

        case 8:
            //Wurzel
            break;

        case 9:
            //Fakultativ
            break;
        case 10:
            //Fakultativ
            break;
        case 11:
            //Fakultativ
            break;
        case 12:
            //Fakultativ
            break;
        case 13:
            //Fakultativ
            break;
        case 14:
            //Fakultativ
            break;
        case 15:
            //Fakultativ
            break;
        case 16:
            //Fakultativ
            break;
        case 17:
            //Fakultativ
            break;
        case 18:
            //Fakultativ
            break;
        case 19:
            //Fakultativ
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
        printf("<b> beenden\n");
        printf("<w> weiter\n");
        fflush(stdin);
        scanf("%100[^\n]", buffer);
        char *y = (char *) malloc(strlen(buffer) + 1);
        strcpy(y, buffer);

        no = 0;
        weiter = strcmp(y, str2);
        if (strcmp(y, str2) != 0) {
            if (strcmp(y, str1) != 0) {
                printf("ERROR: ungueltige Eingabe\n");
                no = 1;
            }
        } else if (strcmp(y, str1) == 0) {
            exit(0);
        } else {
            no = 0;
        }
        system("cls");
    } while (no != 0);
    return weiter;
}
