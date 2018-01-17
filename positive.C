#include<stdio.h>
int main()
{
int num;
printf("Enter any number:");
scanf("%d",&num);
if(num>=1)
{
printf("NUMBER IS POSITIVE");
}
if(num<1)
{
printf("NUMBER IS NEGATIVE");
}
if(num==0)
{
printf("NUMBER IS ZERO");
}
return0;
}
