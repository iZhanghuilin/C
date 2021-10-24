#include<stdio.h>
int main()
{
    int i,m,n=0;
    for(i=1;i<=1000;i++)
    {
        if(i>=1&&i<=9) 
		{
		printf("%3d%c",i,' ',n++);
		}
        if(i>=10&&i<=99&&(i/10)==(i%10)) 
		{
		printf("%3d%c",i,' ',n++);
		} 
        if(i>=100&&i<=999&&(i/100)==(i%10)) {printf("%3d%c",i,' ',n++);
		}
        if(n==10) {printf("\n",n=0);
		}
        
    }
}

