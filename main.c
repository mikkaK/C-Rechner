#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


int lena = 0;
int lenb = 0;
int lenc = 0;
float newa;
float newb;
float newc;


int checker(char *a, char *b, char *c, int n);

void switche(int n);

int cont();


int main() {
    int n;
    char buffer[101];
    char bufferb[101];
    char bufferc[101];
    int weiter = 0;
    while (weiter == 0) {
        n = 0;
        time_t mytime = time(NULL);
        char * time_str = ctime(&mytime);
        time_str[strlen(time_str)-1] = '\0';


        printf("******************************************************************\n");
        printf("\t\t NYP - PRAKTIKUM INFORMATIK - \n");
        printf("******************************************************************\n");
        printf("NYP, 2021\n");
        printf("mk\n");
        printf("******************************************************************\n");
        printf("\n");
        printf("TESTFAELLE DREIECK\n");
        printf("\n");

        fflush(stdin);
        printf("Seite A: ");
        scanf("%100[^\n]", buffer);
        fflush(stdin);
        char *a = (char *) malloc(strlen(buffer) + 1);
        strcpy(a, buffer);
        printf("\n");

        printf("Seite B:");
        scanf("%100[^\n]", bufferb);
        fflush(stdin);
        char *b = (char *) malloc(strlen(bufferb) + 1);
        strcpy(b, bufferb);
        printf("\n");

        printf("Seite C:");
        scanf("%100[^\n]", bufferc);
        fflush(stdin);
        char *c = (char *) malloc(strlen(bufferc) + 1);
        strcpy(c, bufferc);
        printf("\n");

        n = checker(a, b, c, n);

        switche(n);

        FILE *out=fopen("log.txt","w");
        fprintf(out, "Zeit: %s \n Seite A: %s - Seite B: %s - Seite C: %s", time_str, a ,b, c);
        fclose(out);

        weiter = cont();

    }
    return 0;
}

int checker(char *a, char *b, char *c, int n) {
    lena = strlen(a);
    lenb = strlen(b);
    lenc = strlen(c);

    for (int i = 0; i < lena;) {
        if  (a[i] < 0){
            n = 1;
            return n;
        } else if (!isdigit(a[i]))  {
            n = 2;
            return n;
        } else if (a[i] == 0) {
            n = 3; //Null als seitenlänge
            return n;
        }
        ++i;
    }
    for (int i = 0; i < lenb;) {
        if (b[i] < 0) {
            n = 1;
            return n;
        } else if (!isdigit(b[i])) {
            n = 2;
            return n;
        } else if (b[i] == 0) {
            n = 3; //Null als seitenlänge
            return n;
        }
        ++i;
    }
    for (int i = 0; i < lenc;) {
        if  (c[i] < 0) {
            n = 1;
            return n;
        } else if (!isdigit(c[i])){

            n = 2;
            return n;
        } else if (c[i] == 0) {
            n = 3; //Null als seitenlänge
            return n;
        }
        ++i;
    }
    //printf("%d", n);
    if (n != 1 && n != 2 && n != 3) {
        newa = (float) strtod(a, NULL);
        newb = (float) strtod(b, NULL);
        newc = (float) strtod(c, NULL);


        if (a > b && a > c) {
            newa = (float) strtod(a, NULL);
            if (b > c) {
                newb = (float) strtod(b, NULL);
                newc = (float) strtod(c, NULL);
            } else {
                newb = (float) strtod(c, NULL);
                newc = (float) strtod(b, NULL);
            }
        } else if (b > a && b > c) {
            newa = (float) strtod(b, NULL);
            if (a > c) {
                newb = (float) strtod(a, NULL);
                newc = (float) strtod(c, NULL);
            }
        } else if (a > b) {
            newa = (float) strtod(c, NULL);
            newb = (float) strtod(a, NULL);
            newc = (float) strtod(b, NULL);

        }


        if (newa == newb && newa == newc && newb == newc) {
            n = 4; // gleichseitig
            return n;

        }


        if (newa == newb || newa == newc || newb == newc) {
            n = 5; //gleichschenklig
            return n;

        }
        if ((newa * newa) == (newb * newb) + (newc * newc)) {
            n = 9;
            return n;
        }

        if ((newa + newb) < newc) {
            n = 7;
            return n;
        }
        float newd = newa + newb;
        if (newd == newc) {
            n = 8;
            return n;

        }
        if (newa != newb && newa != newc && newb != newc) {
            n = 6; //gewöhnliches Dreieck
            return n;
        }
    }
    return n;

}

void switche(int n) {
    switch (n) {
        case 1:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC96TF\n");
            printf("---------------------------------\n");
            break;

        case 2:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC12TF\n");
            printf("---------------------------------\n");
            break;

        case 3:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC16TF\n");
            printf("---------------------------------\n");
            break;

        case 4:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC66TF\n");
            printf("---------------------------------\n");
            break;

        case 5:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC84TF\n");
            printf("---------------------------------\n");
            break;

        case 6:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC60TF\n");
            printf("---------------------------------\n");
            break;

        case 7:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC36TF\n");
            printf("---------------------------------\n");
            break;

        case 8:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC56TF\n");
            printf("---------------------------------\n");
            break;

        case 9:
            printf("---------------------------------\n");
            printf("CODE: \t\t");
            printf("FC72TF\n");
            printf("---------------------------------\n");
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
    } while (no != 0);
    return weiter;
}
