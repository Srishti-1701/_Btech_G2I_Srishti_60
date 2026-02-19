#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    printf("enter anything");
    scanf(" %c", &a);
    if (isdigit(a))
    {
        printf("it is a number");
    }
    else if (isalpha(a))
    {
        printf("it is a alphabet");
    }
    else
    {
        printf("it is a special character");
    }
    return 0;
}