#include <stdio.h>

int main(void)
{
    unsigned int a = 1, b = 2, c;
    int count;

    printf("%u, %u, ", a, b);

    for (count = 3; count <= 98; ++count)
    {
        c = a + b;
        printf("%u", c);

        if (count != 98)
            printf(", ");

        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
