#include    <stdio.h>
#define    N    4
void fun(int  (*t)[N])
{  int  j ,r[N];
   for(j=0; j<N; j++)  r[j]=t[0][j];
   for(j=0; j<N; j++)
/**********found**********/
      t[0][N-j-1]=t[j][0];
   for(j=0; j<N; j++)
      t[j][0]=t[N-1][j];
/**********found**********/
   for(j=N-1; j>=0;j--)
      t[N-1][N-1-j]=t[j][N-1];
   for(j=N-1; j>=0; j--)
/**********found**********/
      t[j][N-1]=r[j];
}
main()
{  int t[][N]={21,12,13,24,25,16,47,38,29,11,32,54,42,21,33,10}, i, j;
   printf("\nThe original array:\n");
   for(i=0; i<N; i++)
   {  for(j=0; j<N; j++)  printf("%2d  ",t[i][j]);
      printf("\n");
   }
   fun(t);
   printf("\nThe result is:\n");
   for(i=0; i<N; i++)
   {  for(j=0; j<N; j++)  printf("%2d  ",t[i][j]);
      printf("\n");
   }
}
