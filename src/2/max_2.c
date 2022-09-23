#include <stdio.h>

int max(int x, int y);

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    int maximum;
    maximum = max(max(a, b), c);

    printf("%d", maximum);
    printf(" is max\n");

    return 0;
}

int max(int x, int y)
{
    if (x < y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
