#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m;// m 个 队
    int n;// n 人/队
    int k;// k 学生

    int result;

    scanf("%d %d %d", &m, &n, &k);

    k %= (m * n);

    if (k == 0)
    {
        result = m;
    }
    else
    {
        result = k / n;
        if (result == 0)
        {
            result += 1;
        }
        else
        {
            /* do nothing */
        }
    }

    printf("%d\n", result);

    return 0;
}

// 8 6 36
// 6

// 10 8 90
// 2