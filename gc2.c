#include <stdio.h>

struct stud

{

   char name[20];

   int age;

};

struct stud fun(struct stud person[],int n)

{  int min,i;

   min=0;

   for(i=0;i<n;i++)

     {
     	if (person[i].age<person[min].age) min=i;
//     	printf("%s\n",person[i].name);
//     	printf("%d\n",person[i].age);
	 }

  return (person[min]);

}

void main()

{  struct stud a[]={{"Zhao",21},{"Qian",20},{"Sun",19},{"Li",22}};

   int n=4;
   int m;
   
//   for(m=0;m<n;m++)
//   {
//   	printf("%s %d\n",a[m].name,a[m].age);
//   }

   struct stud minpers;

   minpers=fun(a,n);

printf("%s������С�ߣ������ǣ�%d\n",minpers.name,minpers.age);

}
