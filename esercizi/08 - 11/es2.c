/* crivello di eratostene 


    *   2   3   4   5
    6   7   8   9   10
    11  12  13  14  15
    16  17  18  19  20
    21  22  23  24  25

    *   2   3   *   5
    *   7   *   9   *
    11  *  13   *   15
    *   17  *  19   *
    21  22  23  24  25

solo con la prima riga: guardo i numeri e alimino i loro multipli
    */

#include <stdio.h>

#define TOT 100
#define RIGA 10

int main()
{
    int criv[TOT];
    int i, div;

    for (i = 1; i <= TOT; i++)
        criv[i] = i;

    for (div = 0; div < RIGA; i++)
        if (criv[div] != 1)
            for (i = div; i < TOT; i++)
                if(criv[i] % div == 0) criv[i] = 1;
}