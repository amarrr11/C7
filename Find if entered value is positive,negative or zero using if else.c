//Find if entered value is positive,negative or zero using if else:

#include<stdio.h>
int main()
{
int n;
printf("Enter n=");
scanf("%d",&n);
if(n>0)
printf("Its positive");
else if(n<0)
printf("Its negative");
else
printf("Its Zero");
return 0;
}
