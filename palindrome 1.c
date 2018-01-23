#include<stdio.h>
int main()
{
int n,rem,rev=0,t;
printf("enter the no");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("%d is palindrome",n);
}
else
{
printf("%d not palindrom",n);
}
}
return 0;
}
