#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[5];

    int length;
    length = sizeof(array) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = length - 1; i > -1; i--)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
