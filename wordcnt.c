#include<stdio.h>
void main()
{
 char str[50];
 int i,count=1;
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++);
   if(str[i]==' ')
   {
     count++;
   }
  printf("%d",count);
}
