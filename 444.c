#include<stdio.h>
int main()
{
	char i;
	int a,b,c,d;
	scanf("%c",&i);
	a=i-65+1;
	for(b=0;b<a;b++)
	{
		for(c=0;c<b;c++)
		{
			printf("%c",' ');
		
		}
		for(d=1;d<2*(a-b);d++)
		{
			printf("%c",65+b);
		}
		printf("\n");
	}
 } 
