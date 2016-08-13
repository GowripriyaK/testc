#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
printf("%d is larger",a);
else if(b>=c && b>=a)
printf("%d is larger",b);
else if(c>=a && c>=b)
printf("%d is larger",c);
return 0;
}
