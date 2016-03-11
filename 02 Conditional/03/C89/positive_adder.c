#include <stdio.h>

int main()
{
    int sum=0, n;
    while (scanf("%d",&n)) sum += n>0 ? n : 0;
    printf("%d\n", sum); 
    return 0;
}
