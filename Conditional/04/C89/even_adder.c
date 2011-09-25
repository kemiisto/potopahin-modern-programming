#include <stdio.h>

int main()
{
    int sum=0, n;
    while (scanf("%d",&n)) sum += n%2 ? 0 : n;
    printf("%d\n", sum); 
    return 0;
}
