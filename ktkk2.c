#include <stdio.h>
#define N 3
struct student
{   int score;     /*学生成绩*/
   char name[10]; /*学生姓名*/
} s[N];
void main()
{  int i,score90,score80,score70,score60,score_failed;
   for(i=0;i<N;i++)
      scanf("%d",&s[i].score);/*输入N个学生成绩、姓名、存入数组s中*/
   score90=0;score80=0;score70=0;score60=0;score_failed=0;
   for(i=0;i<N;i++)
   {  switch (s[i].score/10)
      {
          case 10:
          case 9:score90++;break;
          case 8:score80++;break;
          case 7:score70++;break;
          case 6:score60++;break;
          default:score_failed++;
      }         
//	   printf("90-100:%d\n 80-90:%d\n 70-80:%d\n 60-70:%d\n 60down:%d\n",score90,score80,score70,score60,score_failed);

   }
   printf("优：%d\n良：%d\n中：%d\n及格：%d\n不及格：%d\n",score90,score80,score70,score60,score_failed);
}

