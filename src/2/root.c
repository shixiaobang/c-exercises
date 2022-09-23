#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /* ax^2 + bx + c = 0 */
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    int delta;
    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("no solution!\n");
    }
    else
    {
        double x1;
        double x2;

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        if (x1 > x2)
        {
            printf("%.2lf %.2lf\n", x2, x1);
        }
        else
        {
            printf("%.2lf %.2lf\n", x1, x2);
        }
    }

    return 0;
}
