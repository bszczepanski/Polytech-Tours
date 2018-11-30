#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int i;

    int nbr = atoi(argv[1]);
    printf("Nombre : %d", nbr);

    printf(" en binaire : ");
    for (i = 31; i >= 0; i--)
        printf("%d", (nbr >> i) & 1);
    printf("\n");
}