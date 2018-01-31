#include<stdio.h>
int main()
{
int i,a,sum=0,b,n;
printf("enter the values");
scanf("%d %d %d",&a,&b,&n);
for(i=1;i<=n;i++)
{
num=a+(i-1)*b;
sum=sum+num;
}
printf("sum is:%d",sum);
return 0;
}
