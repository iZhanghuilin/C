#include <stdio.h>
int main()
{
    int a,b,c,j,i;
    char ch;
    scanf("%c",&ch);
    a=ch-'A'+1;//ÊäÈë×ÖÄ¸µÄÐòºÅ
    for (b=1;b<=a;b++)
        {
            for(c=26;c>=b;c--) printf("%c",' ');
            for(c=1;c<=b;c++) printf("%c",'A'+c-1);
            j='A'+c-3;
            for(c=j;c>='A';c--) printf ("%c",c);
            printf("\n");
        }
        a=a-1;
    for(b=a;b>=1;b--)
        { for(c=26;c>=b;c--) printf("%c",' ');
            for(c=1;c<=b;c++) printf("%c",'A'+c-1);
            j='A'+c-3;
            for(c=j;c>='A';c--) printf ("%c",c);
            printf("\n");
        }  
        
    return 0;
}

