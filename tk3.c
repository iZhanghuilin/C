#include <stdio.h>
#include <string.h>
main()
{  int i,k=0;  char a[80],b[80],*p;
   p=a;
   gets(p);
   while(*p)
   {  for (i=1;i<sizeof(a)/sizeof(a[0]);p++,k++,i++)
      {
         if ((k+1)%4==0) { b[k]=' '; k++;}
         b[k]=*p;
      }
   }
   b[k]='\0';
   puts(b);
}
