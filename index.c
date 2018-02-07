#include<stdio.h>
int main()
{
int a[3],i,n;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d %d\n",i,a[i]);
}
return 0;
}

