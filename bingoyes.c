#include<stdio.h>
#include<math.h>
int main()
{
	int data1,data2,m;
    char op;
	scanf("%d %d %c",&data1,&data2,&op);
    if (op == '+') 
    {	
	    m=data1+data2;
    	printf("%d\n",m);
	}
	

	else if (op == '-')
	{
		m=data1-data2;
    	printf("%d\n",m);
	}

    else if (op=='*')
    {
    	m=data1*data2;
    	printf("%d\n",m);
	}
	
	else if (op=='/'&&data2!=0&&data1%data2==0)
	 
		{
		m=data1/data2;
		printf("%d\n",m);
		}
	
	   
	 else if (op=='/'&&data2!=0&&data1%data2!=0) 
    {
	   	
		printf("%.2f\n",(float)data1/data2);
	}
	
	else if (op=='/'&&data2==0)
	{
		printf("Zero Divided Error!\n");
	}
	
	if  (op!='+') 
	 if  (op!='-')
	 if (op!='*')
	 if (op!='/')
	{
		printf("ERROR!\n");

	}

    	
	return 0;

}    





 


