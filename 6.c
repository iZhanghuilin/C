#include <stdio.h>

main()
{
	float a,b;
	
	scanf("%f %f",&a,&b);
	
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.",a,b,b * 8 / a);
 } 
