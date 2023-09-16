#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int j = 0;

    printf("Block F: \n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 3)
                printf("#");
            else if (j == 0)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Large C: \n");
    int height = 10;
    int width = 7;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if ((j == 0) || (i == 0 || i == height - 1))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}