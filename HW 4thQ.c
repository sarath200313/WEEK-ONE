#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter 2 Numbers:\n");
    scanf("%d %d",&a,&b);
    if (a < b)
    printf("up");
    else if (b < a)
    printf("down");
    else if (a == b)
    printf("equal");
    else
    {
        printf("Error");
        exit(0);
    } 
    return 0;
}
