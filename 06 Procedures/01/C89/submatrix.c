#include <stdlib.h> 
#include <stdio.h>

typedef struct {int data[0][0];} Array2d;

int main() 
{
    /* read data from stdin */
    int m, n, l;
    
    if (3 != scanf("%d %d %d", &m, &n, &l))
        fprintf(stderr, "2d matrix dimension & square size expected\n"),
        exit(1);
    
    Array2d* arr = malloc(sizeof(int)*m*n);
    int i,j;
    for (i=0; i<m; ++i)
        for (j=0; j<n; ++j)
            if (1 != scanf("%d", &arr->data[i][j]) )
                fprintf(stderr, "matrix data expected\n"),
                exit(2);
    
    free(arr);
    return 0;
}
