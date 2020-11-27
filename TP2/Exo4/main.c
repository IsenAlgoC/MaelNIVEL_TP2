#include <stdlib.h>
#include <stdio.h>

#include <math.h>


int main() {
    srand(time(NULL));

    int aleatoire = NULL;
    while (aleatoire > 10000 || aleatoire == NULL)
    {
        aleatoire = rand();
    }

    int stop = 0;
    int guess = 0;
    int supp = 0;
    while (stop == 0)
    {
        printf("Choisir un nombre : ");
        scanf_s("%d", &guess);
        if (guess > aleatoire)
        {
            printf("Nombre trop grand\n");
            supp = supp + 1;
        }
        else if (guess < aleatoire)
        {
            printf("Nombre trop petit\n");
            supp = supp + 1;
        }
        else
        {
            supp = supp + 1;
            printf("Bravo, tu as trouve en %d coups\n", supp);
            stop = 1;
        }
    }

    system("pause");
    return(EXIT_SUCCESS);


}
