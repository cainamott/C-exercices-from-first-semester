int main()
{

    int matriz1[5][2];
    int matriz2[5][2];
    int matriz3[5][2];
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 2; j++)
        {
            matriz1[i][j] = rand() % 10;
            matriz2[i][j] = rand() % 10;

        }
    }
    for(i = 0; i < 5; i++)
    {   printf("\n");
        for(j = 0; j < 2; j++)
        {
            printf("%d \t", matriz1[i][j]);

        }

    }printf("\n\n");
     for(i = 0; i < 5; i++)
    {   printf("\n");
        for(j = 0; j < 2; j++)
        {
            printf("%d \t", matriz2[i][j]);

        }

    }
    for(i = 0; i<5; i++)
    {
        for(j = 0; j<2; j++)
        {
            matriz3[i][j] = (matriz1[i][j] + matriz2[i][j]);

        }
    }printf("\n\n");
     for(i = 0; i < 5; i++)
    {   printf("\n");
        for(j = 0; j < 2; j++)
        {
            printf("%d \t", matriz3[i][j]);

        }
    }
return 0;
}
