#include <stdio.h>
void secret(char a[], char *p)
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		
		if(a[i]>='a'&&a[i]<='w')
		{
			a[i]+=3;
		}
		else if(a[i]>='x'&&a[i]<='z'){
			a[i]-=23;
		}
		*p++=a[i];
	}
			
	}
void open(char d[],char *q)
{
		int i;
	for(i=0;i<strlen(d);i++)
	{
		
		if(d[i]>='d'&&d[i]<='z')
		{
			d[i]-=3;
		}
		else if(d[i]>='a'&&d[i]<='c'){
			d[i]+=23;
		}
		*q++=d[i];
	}
}

int main()
{
	int a[50],b[50],c[50];
	gets(a);
	secret(a,b);
	puts(b);
	open(b,c);
	puts(c);
	
}
