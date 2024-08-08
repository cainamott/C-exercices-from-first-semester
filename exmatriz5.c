#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz1[3][3];
    int matriz2[3][3];

    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matriz1[i][j] = rand() % 10;

        }
    }
    for(i = 0; i < 3; i++)
    {   printf("\n");
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", matriz1[i][j]);

        }

    }
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matriz2[i][j] = matriz1[j][i];

        }
    }printf("\n\n");
     for(i = 0; i < 3; i++)
    {   printf("\n");
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", matriz2[i][j]);

        }

    }
return 0;
}
