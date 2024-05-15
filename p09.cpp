#include <stdio.h>
#include <math.h>


int main (void)
{
    int nin;
    scanf("%d", &nin);

    for(int i = 0; i < nin; i++)
    {
        long long int n, r; 
        scanf("%lld", &n);

        r = sqrt(n);
        if(n - r * r == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}