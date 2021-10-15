#include <stdio.h>

int main()
{
	int day,sum;
	int a=0;
	
	scanf("%d",&day);
	
	while(a < day)
	{
		a++;
	
		sum += a;
		
	}
	printf("%d",sum);
	return 0;
}
