#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age_1;
    int age_2;

    scanf("%d %d", &age_1, &age_2);

    if (age_1 > age_2)
    {
        printf("statement\n");
    }
    else
    {
        if (age_1 < age_2)
        {
            printf("statement\n");
        }
        else
        {
            printf("statement\n");
        }
    }

    return 0;
}
