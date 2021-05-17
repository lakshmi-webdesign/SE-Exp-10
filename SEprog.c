#include<stdio.h>
void main()
{
    int a,b,sum ,diff;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d",sum);
    
    //added extra 2 lines
    diff=a-b;
    printf("%d",diff);
}