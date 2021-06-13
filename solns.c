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
