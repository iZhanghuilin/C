#include <string.h>

#define NUM 5

struct student

{  int rank;    /* ѧ������ */

   char *name;   /* ѧ������ */

   float score; /* ѧ���ɼ� */

} stu[]={5,"Cary",95.8,3,"Tom",89.3,4,"Mary",78.2,1,"Jack",95.1,2,"Jim",90.6};

main()

{ char str[10]; int i;

do

{  printf("Enter a name:");

   scanf("%s",&str);

   for(i=0;i<NUM;i++)
   {
   		 if ((strcmp(str,stu[i].name)!=0))
	{
		continue;
	}

     else if(strcmp(str,stu[i].name)==0)
	 {  printf("name:%5s\n",stu[i].name);

        printf("rank:%d\n",stu[i].rank);

        printf("average:%5.1f\n",stu[i].score);
break;
     } 
     

   }
  if (i>=NUM&&strcmp(str,"0")!=0) printf("Not found\n");
  

} while(strcmp(str,"0")!=0);

}


