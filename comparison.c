#include<stdio.h>
int main()
{
    int x, y;
    printf("enter first no.");
    scanf("%d", &x);
    printf("enter second no.");
    scanf("%d", &y);
    if (x==y)
    {
        printf("equal");
    }
    else 
    {
        printf("not equal");
    }
    return 0;
}