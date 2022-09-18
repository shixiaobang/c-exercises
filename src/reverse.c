#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 4; i > -1; i--)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    
    return 0;
}
