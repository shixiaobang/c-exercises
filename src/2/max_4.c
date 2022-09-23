#include <stdio.h>

int max(int x, int y);

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    int d;

    scanf("%d,%d,%d,%d", &a, &b, &c, &d);

    int maximum;
    maximum = max(max(a, b), max(c, d));

    printf("%d\n", maximum);

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