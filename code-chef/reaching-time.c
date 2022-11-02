// Chef has recently moved into an apartment. It takes 3030 minutes for Chef to reach office from the apartment.

// Chef left for the office XX minutes before Chef was supposed to reach.
// Determine whether or not Chef will be able to reach on time.

#include <stdio.h>

int main()
{
    int T, X, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &X);
        if (X >= 30)
            printf("yes \n");
        else
            printf("no \n");
    }
    return 0;
}
