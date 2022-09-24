#include <stdio.h>

char grade(int score);

int main(int argc, char const *argv[])
{
    int score;

    while (scanf("%d", &score) != EOF)
    {
        if (score < 0 || score > 100)
        {
            printf("error!\n");
        }
        else
        {
            printf("%c\n", grade(score));
        }
    }

    return 0;
}

char grade(int score)
{
    if (score >= 90)
    {
        return 'A';
    }
    else
    {
        if (score > 79)
        {
            return 'B';
        }
        else
        {
            if (score > 69)
            {
                return 'C';
            }
            else
            {
                if (score > 59)
                {
                    return 'D';
                }
                else
                {
                    return 'E';
                }
            }
        }
    }
}
