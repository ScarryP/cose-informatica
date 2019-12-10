#include <stdlib.h>

float **malloc2d(int, int);

int main()
{
    return 0;
}

// float **malloc2d(int dim1, int dim2)
// {
//     float *p[dim1];
//     int i;

//     p[0] = malloc(sizeof(float *) * dim1);

//     for (i = 0; i < dim1; i++){
//         p[i] = malloc(dim2);
//     }
//     return p;
// }

float **malloc2d(int nr, int nc)
{
    float **m;
    int i, j;

    m = (float **)malloc(nr * sizeof(float *));
    if (!m)
        return NULL;
    for (i = 0; i < nr; i++)
    {
        m[i] = (float *)malloc(sizeof(float) * nc);
        for (j = 0; j < nc; j++)
        {
            m[i][j] = 0;
        }
    }

    return m;
}