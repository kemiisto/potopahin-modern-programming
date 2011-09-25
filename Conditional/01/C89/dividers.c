#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    if (1!=scanf("%d",&n))
        fprintf(stderr, "N must be integer\n"),
        exit(1);
    int d;
    for (d=n-1; d>1 && d > n/d; --d) if (!(n%d)) printf("= %d*%d\n", d, n/d);
    return 0;
}
