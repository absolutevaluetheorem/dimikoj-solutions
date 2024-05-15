#include <stdio.h>
#include <math.h>



int isprime (long long int n);


int main (void)
{
    int numin;
    scanf("%d", &numin);

    long long int num;
    int stat[10];
    long long int numbers[10];

    for(int i = 0; i < numin; i++)
    {
        scanf("%lld", &num);
        numbers[i] = num;
        stat[i] = isprime(num);
    }

    for(int i = 0; i < numin; i++)
    {
        if(stat[i] == 1)
            printf("%lld is a prime\n", numbers[i]);
        else if(stat[i] == 2)
            printf("%lld is not a prime\n", numbers[i]);
    }
    return 0;
}


int isprime (long long int n) 
{
    int root = sqrt(n) + 1;
    for (int i = 2; i < root; i++)
    {
        if (n % i == 0) return 2;
    }
    return 1;
}