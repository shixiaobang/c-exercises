#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);

    int flag = (number % 3 == 0) && (number % 5 == 0) && (number % 7 == 0);

    if (flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
