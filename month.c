#include <stdio.h>
int main()
{ int month;
printf ("enter month number");
scanf ("%d", &month);
if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    printf("no. of days is 31");
}
else if(month == 2) {
    printf("no. of days is 28 or 29");
}
else {
    printf("no. of days is 30");
}
return 0;
}