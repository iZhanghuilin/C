#include <stdio.h>

void fun(char s[],char *p)
 {
   	int i;
	 int j=0;
	 int n;
 	int len = strlen(s);
 	
 	for(i=0;i<len;)
 	{
 		while(j==0)
 		{
 			if(s[i]>'0'&&s[i]<='9')
			 {
				  *p++=s[i];
				j++;
			   
		 }else break;
		 }
		 i++;
		 while (j==1&&i<len)
	{
		 	if(s[i]>='0'&&s[i]<='9')
			 {
				  *p++=s[i];
				
			  }	i++;
	 }
 }
 }
 
 
int main()
{
	char str[100],a[100];
	gets(str);
	fun(str,a);
	puts(a);
	return 0;
 } 
 
 
