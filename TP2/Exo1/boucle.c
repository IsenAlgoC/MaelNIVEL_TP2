#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "boucle.h"



int main() {
    printf("Boucle while avec valeur fixe => ");
    boucleWhile(100);
    printf("Boucle for avec valeur fixe => ");
    boucleFor(100);
    printf("Boucle do While avec valeur fixe => ");
    boucleDoWhile(100);
    printf("Boucle While avec valeur choisie => ");
    boucleWhileDepassement();
    printf("Boucle For avec valeur choisie => ");
    boucleForDepassement();

    system("pause");
    return(EXIT_SUCCESS);
}

void boucleWhile(int nombre) {
    int compteur = 0;
    int somme = 0;
    while (compteur < nombre)
    {
        compteur++;
        somme += compteur;
    }
    printf("La somme des %d premiers entier : %d\n", nombre, somme);
    printf("\n");
}

void boucleFor(int nombre) {
    int somme = 0;
    for (size_t i = 0; i <= nombre; i++)
    {
        somme += i;
    }
    printf("La somme des %d premiers entier : %d\n", nombre, somme);
    printf("\n");
}

void boucleDoWhile(int nombre) {
    int compteur = 0;
    int somme = 0;
    do
    {
        compteur++;
        somme += compteur;
    } while (compteur < nombre);
    printf("La somme des %d premiers entier : %d\n", nombre, somme);
    printf("\n");
}

void boucleWhileDepassement() {
    int n = 1, compteur = 0, max = 0;
    unsigned short int somme = 0;
    printf("Entrer une valeur de n : ");
    scanf_s("%d", &n);
    printf("La valeur max d'un unsigned short int est: %d \n", USHRT_MAX);

    printf("\n");
    while ((compteur < n) && (USHRT_MAX - somme) >= compteur) // Evite le dépassement de capacité
    {
        compteur++;
        somme += compteur;
        max++;
    }
    printf("La valeur que vous avez inscrit est : %d.\nLa somme des %d premiers entier sans depassement de capacite est : %hu\n", n, max, somme);
    printf("\n");

}

void boucleForDepassement() {
    int somme = 0;
    unsigned short int n;
    printf("Choisir un nombre : ");
    scanf_s("%hu", &n);
    while (n > 361)
    {
        printf("\nChoisir un nombre >= 361 : ");
        scanf_s("%hu", &n);
    }

    for (size_t i = 0; i <= n; i++)
    {
        somme += i;
    }
    printf("La somme des %hu premiers entier : %d\n", n, somme);
    printf("\n");


}


