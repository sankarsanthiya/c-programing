#include<stdio.h>
int main()
{
char ch;
printf("enter the value");
scanf("%c",&ch);
if(ch>='1' && ch<='9')
{
printf("given is numeric");
}
else
{
printf("given is string");
}
return 0;
}
