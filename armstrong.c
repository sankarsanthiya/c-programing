#include<stdio.h>
int main()
{
int n,result=0,t,d;
printf("enter the number",n);
n=t;
while(n!=0)
{
d=n%10;
result=result+(d*d*d);
n=n/10;
}
if(t==result)
{
printf("number is armstrong");
}
else
{
printf("number is not armstrong");
}
return 0;
}
