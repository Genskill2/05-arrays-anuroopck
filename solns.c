/* Enter your solutions in this file */
#include <stdio.h>

int max (int ar[], int numbr)
{   int highest=0;
    for (int i=0; i<numbr; i++ )
    {
        if (highest < ar[i])
        {
          highest = ar[i];
        }
    }
    return highest;
}
int min (int ar[], int numbr)
{   int lowest=ar[0];
    for (int i=1; i<numbr; i++ )
    {
        if (lowest > ar[i])
        {
          lowest = ar[i];
        }
    }
    return lowest;
}
float average (int ar[], int numbr)
{   float average = 0;
    for (int i=1; i<numbr; i++ )
    {
        average = average + ar[i];
    }
    return (average/numbr);
}
