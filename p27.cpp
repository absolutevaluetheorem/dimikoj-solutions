#include <stdio.h>
#include <math.h>

void arm(int x);

int main (void)
{
    int numin;
    scanf("%d", &numin);

    int num[numin];
    for(int i = 0; i < numin; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < numin; i++)
    {
        int x = num[i];
        arm(x);
    }
    return 0;
}

void arm(int x)
{
    int s = pow((x / 100), 3) + pow(((x - 100 * (x / 100)) - (x - 10 * (x / 10))) / 10, 3) + pow((x - 10 * (x / 10)), 3);
    if (x == s)
    {
        printf("%d is an armstrong number!\n", x);
        return;
    }
    else
    {
        printf("%d is not an armstrong number!\n", x);
        return;
    }
}