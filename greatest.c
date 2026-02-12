#include<stdio.h>
int main()
{
    int x, y, z;
    printf("enter first no.");
    scanf("%d", &x);
    printf("enter second no.");
    scanf("%d", &y);
    printf("enter third no.");
    scanf("%d", &z);
    if (x>y && x>z)
    {
        printf("1st no. is largest %d", x);
    }
    else if (y>x && y>z)
    {
        printf("2nd no. is largest %d", y);
    }
    else
    {
        printf("3rd no. is greatest %d", z);
    }
    return 0;
}