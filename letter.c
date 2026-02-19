#include <stdio.h>
int main()
{
    char op;
    printf("enter a character");
    scanf( " %c", &op);
    if(op == 'a' ||  op == 'e' || op == 'i' || op == 'o' || op == 'u' || op == 'A' ||  op == 'E' || op == 'I' || op == 'O' || op == 'U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}