#include<stdio.h>
#include <string.h> 

void copy(char x[],char y[])
{
	int sx,i,j,sy;
	sx=strlen(x);
	sy=strlen(y);
	for(i=sx;i<sx+sy;i++){
		
		for(j=0;j<sy;j++,i++){
				x[i]=y[j];
	}
		}
	
}



int main()
{
	char a[50],b[20];
	gets(a);
	gets(b);
	copy(a,b);
	puts(a);
}
