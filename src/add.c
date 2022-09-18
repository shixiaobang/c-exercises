#include <stdio.h>

int main(int argc, char const *argv[])
{
    int operand_1;
    int operand_2;
    scanf("%d %d", &operand_1, &operand_2);

    int result;
    result = operand_1 + operand_2;

    printf("%d\n", result);

    return 0;
}
