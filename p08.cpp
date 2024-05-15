#include <stdio.h>

int main (void)
{
    int nin;
    scanf("%d", &nin);

    for(int i = 0; i < nin; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if(a < b && a < c)
        {
            if(b < c)
            {
                printf("Case %d: %d %d %d\n", i, a, b, c);
            }
            else 
            {
                printf("Case %d: %d %d %d\n", i, a, c, b);
            }
        }
        else if(b < a && b < c)
        {
            if(a < c)
            {
                printf("Case %d: %d %d %d\n", i, b, a, c);
            }
            else 
            {
                printf("Case %d: %d %d %d\n", i, b, c, a);
            }
        }
        else 
        {
            if(b < a)
            {
                printf("Case %d: %d %d %d\n", i, c, b, a);
            }
            else 
            {
                printf("Case %d: %d %d %d\n", i, c, a, b);
            }
        }
    }
    return 0;
}