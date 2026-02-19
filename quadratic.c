#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, x, y;
    printf("enter a, b, c constants of the quadratic eqaution");
    scanf("%lf %lf %lf", &a, &b, &c);
    x=(-b+(sqrt(b*b - 4*a*c)))/(2*a);
    y=(-b-(sqrt(b*b - 4*a*c)))/(2*a);
    printf("roots are %.2lf %.2lf", x, y);
    return 0;
}