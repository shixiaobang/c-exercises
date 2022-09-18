#include <stdio.h>

int main(int argc, char const *argv[])
{
    int total;
    scanf("%d", &total);

    int quotient;
    quotient = total / 5;

    int remainder;
    remainder = total % 5; // remainder = number - 5 * quotient;

    int number;
    number = total - remainder;

    printf("quotient : %d\n", quotient);
    printf("number   : %d\n", number);
    printf("remainder: %d\n", remainder);

    return 0;
}
