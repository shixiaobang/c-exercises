#include <stdio.h>

int main(int argc, char const *argv[])
{

    char symbol;

    scanf("%c", &symbol);

    int rank = 3;

    for (int i = 0; i < rank - 1; i++)
    {
        for (int j = rank - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    for (int i = 0; i < 2 * rank - 1; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");

    for (int i = rank - 1; i > 0; i--)
    {
        for (int j = 0; j < rank - i; j++)
        {
            printf(" ");
        }
        for (int j = 2 * i - 1; j > 0; j--)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
