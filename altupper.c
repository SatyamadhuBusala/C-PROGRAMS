#include<stdio.h>
void main()
{
 char str[30];
 int i,count=0;
 printf("Enter the string ");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
  count++;
 }
  for(i=0;i<=count;i++)
 {
  if(i%2==0)
     printf("%c",str[i]);
  else
  {
   str[i]=str[i]-32;
   printf("%c",str[i]);
  }
 }
}
