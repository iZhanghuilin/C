#include<stdio.h>
int main()
{
	int a,n;
	int sn=0,tn=0;
	int i;
	scanf("%d %d",&a,&n);
 

	for(i=1;i<=n;i++)
	{
		tn=tn+a;
		a=a*10;
		sn=sn+tn;
		if(i<n)
		{
			printf("%d+",tn); 
		 } 
		 else
		 {
		 	printf("%d",tn);
		 }
 
	}
	

	printf("=%d\n",sn);
	return 0;
}
