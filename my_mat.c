#include <stdio.h>
#define NoPath 100000

void Floyd_algorithm();


void Afunction(int arr[10][10])
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int x;
            scanf("%d", &x);
            if (x == 0)
                arr[i][j] = NoPath;
            else
                arr[i][j] = x;
        }
    }
    Floyd_algorithm(arr);
}

void Bfunction(int arr [10][10])
{
    int i = 0;
    int j = 0;
    scanf("%d%d", &i, &j);
    if (arr[i][j] != NoPath)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void Cfunction(int arr [10][10])
{
    int i = 0;
    int j = 0;
    scanf("%d%d", &i, &j);
    if (arr[i][j] !=NoPath)
        printf("%d\n", arr[i][j]);
    else
        printf("-1\n");
}

void Floyd_algorithm(int arr [10][10])
{
    for (int k = 0; k < 10; k++)
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                if (j != i && (arr[i][j] > arr[i][k] + arr[k][j]))
                    arr[i][j] = arr[i][k] + arr[k][j];
}
