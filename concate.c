#include<stdio.h>
void man()
{
 int len,i;
 char a[10],b[10];
 printf("Enter first string");
 gets(a);
 printf("Enter second string");
 gets(b);
 for(len=0;a[len]!='\0';len++)
  {
  for(i=0;b[i]!='\0';i++)
   {
   a[len]=b[i];
   len++;
   }
  a[len]!='\0';
  printf("String after concatenation is");
  puts(a);
  }
 }
 
