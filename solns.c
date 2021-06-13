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
    for (int i=0; i<numbr; i++ )
    {
        average = average + ar[i];
    }
    return (average/numbr);
}
int mode (int ar[], int numbr)
{   int count, highest = 0;
    for (int i=0; i<numbr; i++ )
    {   count = 1;
        for (int j = 0; j < i; j++)
        {
          if(ar[j] == ar[i] )
          {
            count = count + 1;
          }
          if (count > highest) {
            highest = count;
          }
        }
    }
    return highest;
}
