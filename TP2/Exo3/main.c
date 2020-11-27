#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

int main() {
    bissextileLogique();
    bissextileIfElse();
 

    system("pause");
    return(EXIT_SUCCESS);
}

void bissextileLogique() {
    int annee = 10000;

    while (annee >= 10000) {
        printf("Saisir une date inferieure a 10000 : ");
        scanf_s("%d", &annee);
    }

    if (annee % 400 == 0 || (annee % 4 == 0 && annee % 100 != 0))
    {
        printf("%d : bissextile\n", annee);
    }
    else
    {
        printf("%d : pas bissextile\n", annee);
    }
}

void bissextileIfElse() {
    int annee = 10000;

    while (annee >= 10000) {
        printf("Saisir une date inferieure a 10000 : ");
        scanf_s("%d", &annee);
    }

    if (annee % 4 == 0)
    {
        if (annee % 100 != 0)
        {
            printf("%d : bissextile\n", annee);
        }
        else
        {
            if (annee % 400 == 0)
            {
                printf("%d : bissextile\n", annee);
            }
            else
            {
                printf("%d : pas bissextile\n", annee);
            }
        }
    }
    else
    {
        printf("%d : pas bissextile\n", annee);
    }
}
