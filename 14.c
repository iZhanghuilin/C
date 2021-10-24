#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,n,j=0,k;
    scanf("%d",&x);
    int A[x];
    for(i=pow(10,x-1);i<=pow(10,x)-1;i++)
    {
        for(n=1;n<=x;n++)
        {
            A[n]=fmod(i,pow(10,n))/pow(10,n-1);
            
        }

        for(k=1;k<=x;k++)
        {
            j=j+pow(A[k],x);

        }
        if(i==j) printf("%d\n",i);
        j=0;
    }
}

