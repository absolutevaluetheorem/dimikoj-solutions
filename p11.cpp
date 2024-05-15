#include <bits/stdc++.h>

long long int fact(long long int n);

int main()
{
    int numin;
    scanf("%d", &numin);
    
    int i;
    for(i = 0; i < numin; i++)
    {
        long long int n;
        scanf("%lld", &n);
        printf("%lld\n", fact(n));
    }
    return 0;
}

long long int fact(long long int n)
{
    long long int p = 1, fac;
    for(long long int k = 2; k <= n; k++)
    {
        p = p * k;
    }
    fac = p;
    return fac;
}