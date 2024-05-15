#include <stdio.h>
#include <string.h>


int main ()
{
    int numin, MAXLIMIT = 1000, pv = 0, pc = 0;
    scanf("%d", &numin);

    char vwls[numin][MAXLIMIT], cons[numin][MAXLIMIT], in[numin][MAXLIMIT];
    for(int i = 0; i < numin; i++)
    {
        //fgets(in[numin][MAXLIMIT], MAXLIMIT, stdin);
        /*scanf("%[^\n]s", &in[i][MAXLIMIT]);
        int x = strlen(in[i][MAXLIMIT]);
        for(int j = 0; j < x; j++)
        {
            if(in[i][j] != ' ')
            {
                if(in[i][j] == 'a' || in[i][j] == 'e' || in[i][j] == 'i' || in[i][j] == 'o' || in[i][j] == 'u')
                {
                    vwls[i][pv] = in[j];
                    pv++;
                }
            else
                {
                    cons[i][pc] = in[j];
                    pc++;
                }
            }
        }*/
    }
    //printf("%d", pv);
    int v = pv;
    int c = pc;
    for(int i = 0; i < numin; i++)
    {
        printf("%s\n", vwls[i][v]);
        printf("%s\n", cons[i][c]);
    }
    return 0;
}