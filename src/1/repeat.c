#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[3];
    int length;
    length = sizeof(array) / sizeof(int);

    int times;
    times = 2;

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < times; j++)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
