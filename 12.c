#include <stdio.h>

int main()
{
	int chi;
	float cm,inch;
	scanf("%f",&cm);
	while(cm > 0)
	{
		chi = cm / 30.48;
		
		inch = (cm - chi * 30.48) / 2.54 ;
		if (inch >=11.95)
		{
			inch = 0.0;
			chi+=1;
		}
		
		printf("%d %.1f\n",chi,inch);
	scanf("%f",&cm);
	}
	return 0;
}
