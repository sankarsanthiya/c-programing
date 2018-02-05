#include<stdio.h>
int main()
{
int i,n,j,t;
printf("enter the value");
scanf("%d",&n);
printf("input");
int a[n];
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("median is:%d",a[(n+1/2)]);
return 0;
}
