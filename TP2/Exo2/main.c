#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {

    float grandeur1;
    float grandeur2;
    float grandeur3;
    float temp;
    int stop = 1;
    int question;
    while (stop == 1)
    {
        do {
            printf("Longueur de la valise : ");
            scanf_s("%f", &grandeur1);

            printf("Largueur de la valise : ");
            scanf_s("%f", &grandeur2);

            printf("Hauteur de la valise : ");
            scanf_s("%f", &grandeur3);

            if (grandeur1 > 150 || grandeur2 > 150 || grandeur3 > 150)
            {
                printf("L'une des valeurs est trop grande \n");
            }
            if (grandeur1 < 1 || grandeur2 < 1 || grandeur3 < 1)
            {
                printf("L'une des valeurs est trop petite \n");
            }

        } while (grandeur1 > 150 || grandeur2 > 150 || grandeur3 > 150 || grandeur1 < 1 || grandeur2 < 1 || grandeur3 < 1);

        //Range les valeurs dans l'ordre pour éviter le cas ou l'utilisateur mélange largueur, longueur et hauteur
        if (grandeur3 > grandeur2) { temp = grandeur2; grandeur2 = grandeur3; grandeur3 = temp; }
        if (grandeur2 > grandeur1) { temp = grandeur1; grandeur1 = grandeur2; grandeur2 = temp; }
        if (grandeur3 > grandeur2) { temp = grandeur2; grandeur2 = grandeur3; grandeur3 = temp; }

        if (grandeur1 > 55 || grandeur2 > 35 || grandeur3 > 25)
        {
            printf("NON VALIDE\n");
        }
        else
        {
            printf("VALIDE\n");
        }

        printf("Voulez vous verifier une autre valise ? (1 = oui, 0 = non) : ");
        scanf_s("%d", &question);
        if (question == 0)
        {
            stop = 0;
        }

    }

    system("pause");
    return(EXIT_SUCCESS);


}
