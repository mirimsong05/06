#include <stdio.h>

int sumTwo(int a, int b)
{
    int output;
    output = a + b;

    return output;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    int result1, result2, result3;

    result1 = sumTwo(2, 3);
    result2 = square(5);
    result3 = get_max(10, 7);

    printf("sumTwo 결과: %d\n", result1);
    printf("square 결과: %d\n", result2);
    printf("get_max 결과: %d\n", result3);

    return 0;
}