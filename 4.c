#include <stdio.h>

int main()
{
	int s = 0,n = 1;
	
	for(n = 1; n <=100; n++)
	{
		if (n %10 == 8 || n /10 == 8)
		{
		     s += n;
		}
		
	}
	printf("%d",s);
	return 0;
}
