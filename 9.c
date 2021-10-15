#include <stdio.h>

#define q 60
int main()
{
	int h,m,s;
	scanf("%d",&m);
	while(m > 0)
	{
		h=m/q;
		s=m-q*h;
		printf("%d %d\n",h,s);
	scanf("%d",&m);
	}
	return 0;
}
