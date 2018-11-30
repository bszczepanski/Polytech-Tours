#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int puissance(int i)
{
    if (i == 0)
        return 1;
    else
    {
        int val = 1;
        for (int j = 1; j <= i; j++)
        {
            val *= 2;
        }
        return val;
    }
}

int main(int argc, char *argv[])
{
    

    int nbr = atoi(argv[1]);
    int nbr2 = atoi(argv[2]);

    if (nbr2 > 32)
    {
        printf("2eme argument trop grand\n");
        exit(0);
    }

    int tab[32];
    for (int i = 0; i < 32; i++)
    {
        tab[i] = nbr % 2;
        nbr /= 2;
    }
    tab[nbr2] = 0;

    int nbr3;
    for (int i = 0; i < 32; i++)
    {
        if (tab[i] == 1)
            nbr3 += puissance(i);
    }
    
    printf("Valeur décimal après: %d\n", nbr3);

    printf("TEST \n");
    sleep(1); // arrete le processus pendant une seconde
    int nbr4 = nbr3;
    printf("Valeur décimal après: %d\n", nbr4);
    
    for (int y = 31; y >= 0; y--)
        printf("%d", (nbr4 >> y) & 1);
    printf("\n");

    return 0;
}