#include <stdio.h>

void soma_prod(int a, int b, int *s, int *p)
{
    *s = a + b;
    *p = a * b;
}

int main(void)
{

    int a = 2, b = 3, s, p;

    soma_prod(a, b, &s, &p);

    printf("SOMA: %d \n", s);
    printf("PRODUTO: %d", p);

    return 0;
}