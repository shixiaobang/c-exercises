#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double radius;
    scanf("%lf", &radius);

    double area;
    area = M_PI * radius * radius;

    printf("%.3lf\n", area);

    return 0;
}
