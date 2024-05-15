#include <stdio.h>
#include <stdalign.h>

int main (void)
{
    for(int i = 1000; i > 0; i--)
    {
        if(i - 5 * (i / 5) != 1)
            printf("%d\t", i);
        else 
            printf("%d\t\n", i);
    }
}