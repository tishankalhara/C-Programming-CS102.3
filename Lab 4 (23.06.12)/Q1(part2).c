#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Enter a number ");
    scanf("%d",&n1);
    switch(n1%2)
      {
          case 0:printf("%d is a even number ",n1);break;
          case 1:printf("%d is a odd number ",n1);break;
          default:printf("Invalid Output ");
      }
    return 0;
}
