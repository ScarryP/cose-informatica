#include <stdio.h>

#define PI 3.14

int main()
{
    float raggio, area;

    scanf("%f", &raggio);

    area = raggio * raggio * PI;

    printf("area %f", area);

    return 0;
}