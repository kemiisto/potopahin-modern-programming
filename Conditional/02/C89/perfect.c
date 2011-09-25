#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int d,res=n;
    for (d=1; d<n; d++)
        if (!(n%d)) res-=d;
    printf(!res ? "Yes\n" : "No\n");
    return 0;
}
