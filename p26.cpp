#include <stdio.h>
#include <math.h>

int main (void)
{
    int numin;
    scanf("%d", &numin);

    float nums[numin];
    for(int i = 0; i < numin; i++)
    {
        scanf("%f", &nums[i]);
    }
    for(int i = 0; i < numin; i++)
    {
        int x = 1 + (log(nums[i]) / log(2));
        printf("%d days\n", x);
    }
}