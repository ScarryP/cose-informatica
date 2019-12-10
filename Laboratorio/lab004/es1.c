#include <stdio.h>

typedef struct
{
    float re;
    float im;
} complex;

int isOrigin(complex);

int main()
{

    return 0;
}

int isOrigin(complex n)
{
    return (n.im == 0 && n.re == 0);
}