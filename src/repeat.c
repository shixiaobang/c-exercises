#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
