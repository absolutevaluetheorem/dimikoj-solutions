#include <stdio.h>

int main (void)
{
    int numin, a;
    scanf("%d", &numin);

    for(int i = 0; i < numin; i++)
    {
        scanf("%d", &a);

        for(int j = 0; j < a; j++)
        {
            for(int k = 0; k < a; k++)
            {
                if(k != a - 1)
                {
                    printf("*");
                }
                else
                {
                    printf("*\n");
                }    
            }
            //printf("\n");
        }
        printf("\n");
    }
}