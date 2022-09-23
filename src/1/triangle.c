#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rank = 4;

    for (int i = 0; i < rank; i++)
    {
        for (int j = rank - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
