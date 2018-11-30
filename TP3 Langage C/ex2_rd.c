#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int i;

    int nbr = atoi(argv[1]);
    printf("Nombre 1: %d", nbr);
    int nbr2 = atoi(argv[2]);
    printf("\nRecherche bit: %d\n", nbr2);

    for (i = 31; i >= 0; i--)
        
        printf("%d", (nbr >> i) & 1);
        if (i = nbr2)
        {
          printf("\n Etat bit:%d", (nbr >> i-1) & 1);  
        }
        
    printf("\n");
}