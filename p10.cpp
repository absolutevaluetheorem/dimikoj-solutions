#include <stdio.h>

int main (void)
{
    int nin;
    scanf("%d", &nin);

    for(int i = 0; i < nin; i++)
    {
        float t, c, l, crr, rrr; //rrr = required run rate, crr = current run rate
        scanf("%f %f %f", &t, &c, &l);

        crr = ((c) / ((300 - l) / 6));
        /*
        we'd missed a case here: already won. that's why the answer was wrong initially!
        */
        
        if(t < c)
        {
            rrr = 0.00;
        }
        else 
        {
            rrr = ((t + 1 - c) / (l / 6));
        }
        printf("%.2f %.2f\n", crr, rrr);
    }

    return 0;
}