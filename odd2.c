#include<stdio.h>
int main()
{
int f,l,i;
printf("enter the first no");
scanf("%d",&f);
printf("enter the last number");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("%d",i);
}
}
return 0;
}
