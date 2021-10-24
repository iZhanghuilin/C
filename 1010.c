#include<stdio.h>
int main()
{
    int n,m,sum=0,i,a;
    int n1;
    int CJ[m],XH[m];
    float av;
    printf("Please input student's number:\n");
    scanf("%d",&n);
    printf("Student CJ number is:\n");
    scanf("%d",&m);

    for(n1=1;n1<=n;n1++)
    {
        printf("Please input XH of No %d:\n",n1);
        scanf("%d",&XH[n1]);
        printf("Please input CJ of No %d:\n",n1);

        for(a=1;a<=m;a++)
        {
            i=1;
            scanf("%d",&CJ[i]);
            sum=sum+CJ[i];
            av=(float)sum/m;
            i++;
        }
        printf("Student No %d's Total CJ is %d,Avg CJ is %.1f\n",XH[n1],sum,av);
        sum=0;
    }
}

