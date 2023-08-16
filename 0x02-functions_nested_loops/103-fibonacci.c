#include <stdio.h>

int main(void)
{
    long long int fib1 = 1, fib2 = 2, nextFib;
    long long int sum = 0;

    while (fib2 <= 4000000)
    {
        if (fib2 % 2 == 0)
        {
            sum += fib2;
        }

        nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("%lld\n", sum);

    return 0;
}

