#include <stdio.h>
#include <string.h>

#define maxlimit 10000

int word(char str[]);

int main (void)
{
    int numin;
    scanf("%d ", &numin);

    char line[1000];
    int words[numin];
    for (int i = 0; i < numin; i++)
    {
        fgets(line, 10000, stdin);

        int count = 0;
        for(int i = 0; !(line[i] == '\0'); i++)
        {
            if(line[i] == ' ' || line[i + 1] == '\0' /*|| ((line[i + 1] == '.' || line[i+1] == '!') && line[i + 2] == '\0')*/)
                count++;
            if(line[i] == '\0')
                break;
        }

        words[i] = count;
    }

    for(int i = 0; i < numin; i++)
    {
        printf("Count = %d\n", words[i]);
    }
    return 0;
}

