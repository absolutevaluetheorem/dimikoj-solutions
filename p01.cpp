#include <stdio.h>

bool status(int n);

int main (void) 
{
    int numin;
    scanf("%d", &numin);

    int num;
    int stat[100];

    for(int i = 0; i < numin; i++)
    {
        scanf("%d", &num);
        stat[i] = status(num);
    }

    for(int i = 0; i < numin; i++)
    {
        if(stat[i] == true)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}

bool status(int n)
{
    if(n - (2 * (n / 2)) == 0)
    {
        return true;
    }
    else 
        return false;
}