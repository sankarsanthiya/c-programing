#include<stdio.h>
int main()
{
int a,b i,rem=0,d;
printf("enter the range 1 and 2 \n");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
d=a%10;
rem=rem+d*d*d;
a=a%10;
}
printf(" armstrong no= %d",rem);
}

