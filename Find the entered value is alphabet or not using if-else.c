//Find the entered value is alphabet or not using if-else
#include<stdio.h>
int main()
{
char value;
printf("Enter value=");
scanf("%c",&value);

if((value>='a'&&value<='z')||(value>='A'&& value<='Z'))
printf("Its an alphabet");
else
printf("Not an alphabet");
return 0;
}
