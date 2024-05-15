#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
 

int main()
{
    int numin;
    scanf("%d", &numin);
    
    int i, m;
    char in[100], temp;
    for(i = 0; i < numin; i++)
    {
        scanf("%s", &in);
        int x = strlen(in);

        for(int j = 0; j < x; j++)
        {
            temp = in[j];
            m = temp - '0' - 16;
            printf("%d", m);
        }

        printf("\n");
    }
    return 0;
}

