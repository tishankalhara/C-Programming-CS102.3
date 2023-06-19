#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max,min;

    printf("Enter three numbers ");
    scanf("%d%d%d",&n1,&n2,&n3);
    max=n3;
    min=n3;
    if(max<n1)
        max=n1;
    if(max<n2)
        max=n2;
    if(min>n1)
        min=n1;
    if(min>n2)
        min=n2;
    printf("\nThe highest number is %d\n",max);
    printf("The lowest number is %d\n",min);
    return 0;
}
