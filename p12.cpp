#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>

long long int fact(long long int n);

int main()
{
    int numin;
    scanf("%d", &numin);

    int i;
    for(i = 0; i < numin; i++)
    {
        /*long long int num;
        scanf("%lld", &num);

        long long int factorial = fact(num);
        
        printf("%lld", factorial);*/

        int num, k = 5, count = 0;
        scanf("%d", &num);

        while(k <= num)
        {
            count = count + num / k;
            k = k * 5;
        }

        printf("%d\n", count);


    }
    
}

long long int fact(long long int n)
{
    long long int p = 1, f;
    for(long long int i = 2; i <= n; i++)
    {
        p = p * i;
    }
    f = p;
    return p;
}