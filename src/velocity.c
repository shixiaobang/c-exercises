#include <stdio.h>

int main()
{
    double start;
    double end;
    scanf("%lf,%lf", &start, &end);

    int hour;
    int minute;
    int second;
    scanf("%d:%d:%d", &hour, &minute, &second);

    double delta = end - start;

    double time = hour + minute / 60.0 + second / 3600.0;

    double velocity = delta / time;

    printf("v: %.2lf\n", velocity);

    return 0;
}
