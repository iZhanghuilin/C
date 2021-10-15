#include <stdio.h>

int main()
{
	int week,day;
	scanf("%d",&day);
	while(day > 0)
	{
	week = day / 7;
		day = day - week * 7;
		printf("%d %d\n",week,day);
	scanf("%d",&day);
	}
	return 0;
}
