#include <stdio.h>


int main()
{
	double tem,f;
	while(scanf("%lf",&tem)==1)
	{
		
		f = 1.8 * tem +32.0; 
		printf("%.1lf ",f);

	}
	return 0;
}
