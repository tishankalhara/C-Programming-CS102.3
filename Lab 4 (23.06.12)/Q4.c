#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter a Character-");
    scanf("%c",&x);

    switch (x)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':printf("%c is a vowel \n",x);break;
        default:printf("%c not a vowel \n",x);
    }
    return 0;
}
