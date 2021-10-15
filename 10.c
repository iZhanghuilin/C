#include <stdio.h>

int main()
{
	char letter;
	int num;
	scanf("%d %c",&num,&letter);
	while(num >=5 && num <=9 && letter >='a'&&letter <='e')
	{
		
		printf("%d %c\n",num,letter);
		++num;
		++letter;
	
	}
	while(num >=7 && num <=11 && letter >='g'&&letter <='k')
	{
		
		printf("%d %c\n",num,letter);
		++num;
		++letter;
	
	}
	return 0;
}
