#include <stdio.h>
int main()
{ int a, b, c;
printf ("enter first side");
scanf ("%d", &a);
printf ("enter second side");
scanf ("%d", &b);
printf ("enter third side");
scanf ("%d", &c);
if(a+b>c && b+c>a && a+c>b) {
    printf("it is a triangle");
}
else{
    printf("not a triangle");
}
if(a==b && a!=c){
    printf("isosceles triangle");
}
else if(a!=b && a!=c && b!=c){
    printf("scalene triangle");
}
else {
    printf("equilateral triangle");
}
return 0;
}