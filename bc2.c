#include <stdio.h>

#include<string.h>

void main()

{  int i,a[26];

   char ch,str[80],*p=str;

   gets(str);   /*��ȡ�ַ���*/

   for(i=0;i<26;i++)

      a[i]=0;   /*��ʼ���ַ�����*/

   while (*p)

   {  ch=*p++; /*�ƶ�ָ��ͳ�Ʋ�ͬ�ַ����ֵĴ���*/

      (ch>='A' && ch<='Z')?ch=(ch+'a'-'A'):ch; /*��Сд�ַ�ת��*/

      if (ch>='a'&&ch<='z') a[ch-'a']++;

   }

   for(i=0;i<26;i++) printf("%2c",'a'+i); /*���26����ĸ*/

   printf("���ֵĴ���Ϊ��\n");

   for(i=0;i<26;i++) printf("%2d",a[i]); /*�������ĸ���ִ���*/

   printf("\n");

}


