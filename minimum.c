#include<stdio.h>
int main()
{
int a[5],i,p;
printf("enter the values");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
p=a[0];
if(a[i]<p)
{
p=a[i];
}
printf("minimum is:%d",p);
}
