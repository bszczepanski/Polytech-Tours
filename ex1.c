#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int x = 0;
    int y = 0;

    for (x = 1; x < argc; x++)
    {
        char *tmp = argv[x];
        int len = strlen(tmp);
        for (y = len; y > 0; y--)
        {
            printf("%c", tmp[y - 1]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}