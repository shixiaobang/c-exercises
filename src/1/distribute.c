#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m;
    int n;
    int k;

    scanf("%d %d %d", &m, &n, &k);

    k %= (m * n);

    int result;

    if (k == 0)
    {
        result = m;
    }
    else
    {
        result = k / n;

        int flag;
        flag = k % n;

        if (flag != 0)
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
