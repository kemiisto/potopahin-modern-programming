#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int d,res=n-1;
    for (d=2; d<n && d<=n/d; d++)
        if (!(n%d)) res-=d+n/d;
    printf(!res ? "Yes\n" : "No\n");
    return 0;
}
