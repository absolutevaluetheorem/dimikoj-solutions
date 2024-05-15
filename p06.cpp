#include <stdio.h>
#include <stdint-gcc.h>
#include <stddef.h>
#include <math.h>
#include <array>
#include <string.h>

int sum(int a);

int main()
{
    int numin, input;
    scanf("%d", &numin);

    int sums[numin];

    for(int i = 0; i < numin; i++)
    {
        scanf("%d", &input);
        sums[i] = sum(input);
    }

    for(int i = 0; i < numin; i++)
    {
        printf("Sum = %d\n", sums[i]);
    }
}

int sum(int a)
{
    int first, last;
    first = a / pow(10, 4);
    last = a % 10;

    return first + last;
}
