#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x;
    double y;

    scanf("%lf", &x);

    if (x > 0)
    {
        y = x - 10;
    }
    else
    {
        y = x + 10;
    }

    printf("%.2lf\n", y);

    return 0;
}
