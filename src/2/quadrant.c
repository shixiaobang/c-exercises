#include <stdio.h>

int main(int argc, char const *argv[])
{

    double x;
    double y;

    scanf("%lf,%lf", &x, &y);

    if (x > 0)
    {
        if (y > 0)
        {
            printf("quadrant 1\n");
        }
        else
        {
            printf("quadrant 4\n");
        }
    }
    else
    {
        if (y > 0)
        {
            printf("quadrant 2\n");
        }
        else
        {
            printf("quadrant 3\n");
        }
    }

    return 0;
}
