//Display the greatest of three using else-if ladder

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("a is greater=",a);
    else if(b>a && b>c)
        printf("b is greater=%d",b);
    else
        printf("c is greater=%d",c);
    return 0;
}
