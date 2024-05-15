#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
 


int main()
{
    int numin;
    scanf("%d", &numin);
    
    int i, n;
    for(i = 0; i < numin; i++)
    {
        scanf("%d", &n);
        printf("Case %d: ", i + 1);

        for(int j = 1; j <= n; j++)
        {
            if((n - j * (n / j) == 0) && (j < n))
                printf("%d ", j);
            if(j == n)
                printf("%d\n", j);
        }
    }
    return 0;
}
