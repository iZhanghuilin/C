#include <stdio.h>

int main()
{
	float mile,fuel,v1,v2,v3,v4;
	
	const float km = 1.609;
	
	const float l = 3.785 ;
	
	scanf("%f,%f",&mile,&fuel);
	
	v1 = mile/fuel;
	
	v2 =v1*km;
	
	v3=100/v2;
	
	v4=v3*l;
	
	printf("the miles-per-gallon value is: %.1f\n",v1);
	
	printf("the liters-per-100-km value is: %.1f\n",v4);
	
}
