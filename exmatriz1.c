int main()
{

    int matriz[5][5];
    int i, j, soma = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 10;

        }
    }
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
            if(i == j)
            {
              soma = (soma + matriz[i][j]);
            }

        }
    }
    printf("\n\nA soma da diagonal principal é: %d", soma);
}

