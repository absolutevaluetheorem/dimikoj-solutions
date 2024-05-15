#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main (void)
{
    int numin;
    scanf("%d ", &numin);

    char in[100000];
    for(int i = 0; i < numin; i++)
    {
        fgets(in, 100000, stdin);
        int count = 0, len = strlen(in) - 1;

        for(int k = 0; k < len; k++)
        {
            
            if(((in[k] == ' ' && in[k + 1] != ' ') || (in[k + 1] == '\n') || (in[k + 1] == '\0' || in[k + 2] == '\0')) && (in[0] != ' '))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}