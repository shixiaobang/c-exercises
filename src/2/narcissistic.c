#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);

    if (number > 99 && number < 999)
    {
        int ones;
        int tens;
        int hundreds;

        ones = number % 10;
        tens = (number / 10) % 10;
        hundreds = (number / 100) % 10;

        int sum;
        sum = ones * ones * ones + tens * tens * tens + hundreds * hundreds * hundreds;

        if (sum == number)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO!!!\n");
    }

    return 0;
}
