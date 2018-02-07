#include<stdio.h>
int main()
{
int t,m,p;
printf("enter the value");
scanf("%d",&t);
if(t<60)
{
printf("0.%d",t);
}
else
{
p=t/60;
m=t%60;
printf("%d %d",p,m);
}
return 0;
}
