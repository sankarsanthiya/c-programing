#include<stdio.h>
int main()
{
int n;
int count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("no of digits:%d",count);
}
