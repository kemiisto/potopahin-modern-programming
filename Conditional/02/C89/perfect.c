#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int d;
    for (d=1; d<n; d++)
        if (!(n%d)) n-=d;
    printf(!n ? "Yes" : "No");
    return 0;
}
