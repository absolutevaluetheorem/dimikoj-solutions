#include <stdio.h>
#include <math.h>

int main (void)
{
    int numin;
    scanf("%d", &numin);

    long long int num1, num2;
    for(int i = 0; i < numin; i++)
    {
        scanf("%lld %lld", &num1, &num2);
        if(num1 - num2 > 0)
            printf("Invalid!\n\n");
        else 
        {
            long long int q = num2 / num1;
            for(int j = 1; j <= q; j++)
            {
                printf("%lld\n", j * num1);
            }
            printf("\n");
        }
    }

    return 0;
}