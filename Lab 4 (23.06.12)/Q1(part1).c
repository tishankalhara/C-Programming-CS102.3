#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Enter a number ");
    scanf("%d",&n1);
    if (n1%2==0)
        printf("%d is a even number ",n1);
    else
        printf("%d is a odd number ",n1);
}
