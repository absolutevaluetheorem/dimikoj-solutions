#include <stdio.h>
#include <string.h>
#include <conio.h>

int main (void)
{
    int numin, length;
    scanf("%d", &numin);

    char numbers[100];
    int stats[100];

    for (int i = 0; i < numin; i++)
    {
        scanf("%s", &numbers);
        length = strlen(numbers);

        if(numbers[length - 1] == '0' || numbers[length - 1] == '2' || numbers[length - 1] == '4' || numbers[length - 1] == '6' || numbers[length - 1] == '8')
            printf("even\n"); //stats[i] = 1;
        else 
            printf("odd\n"); //stats[i] = 0;
    }

    /*for (int i = 0; i < numin; i++)
    {
        if(stats[i] == 1)
            printf("even\n");
        if(stats[i] == 0)
            printf("odd\n");
    }*/


}