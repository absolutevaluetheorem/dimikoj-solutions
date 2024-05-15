#include <bits/stdc++.h>

int main()
{
    int numin;
    scanf("%d ", &numin);
    
    int i;
    char str[10001];
    char cha, trash;
    for(i = 0; i < numin; i++)
    {
        if(i > 0)
        {
            scanf("%c", &trash); //agerbarer type kora enter take absorb kore. naile i > 0 er shob value er jonno cha er input e type kora \n ta input hoye jay!
        }
        fgets(str, 10001, stdin);
        scanf("%c", &cha);

        int x = strlen(str), count = 0;
        for(int j = 0; j < (x - 1); j++)
        {
            char t = str[j];
            int n1 = t - '0', n2 = cha - '0';
            if(n1 == n2)
            {
                count++;
            }
        }
        str[x - 1] = '\0';
        if(count > 0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", cha, str, count);
        }
        else
        {
            printf("'%c' is not present\n", cha);
        }
    }
    return 0;
}
