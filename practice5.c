#include <stdio.h>

int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    int n, r;
    int result;

    printf("n을 입력하시오: ");
    n = get_integer();

    printf("r을 입력하시오: ");
    r = get_integer();

    result = combination(n, r);

    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}

int get_integer(void)
{
    int value;

    scanf("%d", &value);

    return value;
}

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }

    return res;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}