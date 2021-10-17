#include<stdio.h>
int main()
{
 int a;
 long b=0,c=1;
 scanf("%d",&a);
 while(a)
 {
 	b=a%2*c+b;
 	a=a/2;
 	c=c*10;
 }
 printf("%ld",b);
}

