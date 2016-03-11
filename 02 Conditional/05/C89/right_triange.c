#include <stdlib.h>
#include <stdio.h>

#define MAX(a,b) ((a)>(b) ? (a) : (b))

int main()
{
    int a, b, c;
    if (3!=scanf("%d %d %d", &a, &b, &c))
        fprintf(stderr, "Triangle side length must be natural number.\n"),
        exit(1);
    int max = MAX(a, MAX(b,c));
    printf("%s\n", a*a + b*b + c*c == max*max*2 ? "Yes" : "No");
    return 0;
}
