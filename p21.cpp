#include <stdio.h>
#include <string.h>

int main (void)
{
    int numin;
    scanf("%d", &numin);

    char in[1000], temp;
    for(int i = 0; i < numin; i++)
    {
        scanf("%s ", &in);
        int x = strlen(in);


        for(int j = 0; j <= x; ++j)
        {
            temp = in[x - j];
            if(j != 0)
                printf("%c", temp);
        }
        printf("\n");
    }
}