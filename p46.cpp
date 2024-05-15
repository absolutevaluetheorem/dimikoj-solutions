#include <stdio.h>
#include <string.h>
#include <array>
#include <math.h>

float area(float a, float b, float c);

int main (void)
{
    int numin;
    float a1, a2, a3;
    scanf("%d", &numin);

    float Area[numin];
    for(int i = 0; i < numin; i++)
    {
        scanf("%f %f %f", &a1, &a2, &a3);
        Area[i] = area(a1, a2, a3);
    }

    for(int i = 0; i < numin; i++)
    {
        printf("Area = %0.3lf\n", Area[i]);
    }
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c)); 
}