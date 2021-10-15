#include <stdio.h>
#include <string.h>

main() 
{
	char str1[10],str2[10];
	int len1,len2;
	
	scanf("%s",&str1);
	
	scanf("%s",&str2);
	
	len1 = strlen(str1);
	
	len2 = strlen(str2); 
	
	printf("%s %s\n",str2,str1);
	
	printf("%*d %*d\n",len2,len2,len1,len1);
	
	printf("%s %s\n",str2,str1);
	
	
	printf("%-*d %-*d",len2,len2,len1,len1);
	
	
}
