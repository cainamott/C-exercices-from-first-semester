#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[5][5] = {{1, 1, 1, 1, 1}, {0, 1, 1, 1, 1},{0, 0, 1, 1, 1}, {0, 0, 0, 1, 1}, {0, 0, 0, 0, 1}};
    int i, j, soma = 0;


    for(i = 0; i < 5; i++)
    {   printf("\n");
        for(j = 0; j < 5; j++)
        {
            printf("%d \t", matriz[i][j]);

        }
    }
     for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i > j)
            {
              soma = (soma + matriz[i][j]);
            }

        }
    }
    if(soma == 0)
    {
        printf("\n\n… triangular superior");
    }else
    {
        printf("\n\nN„o È triangular superior");
    }
}
