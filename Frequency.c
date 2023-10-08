#include<stdio.h>
#include<string.h>
void main()
{
 int a,n,count=0;
 char b,str1[100]
 printf("Enter the sentence:");
 gets(str1);
 n=strlen(str1);
 printf("Enter value to check");
 scanf("%c",&b);
 for(a=0;a<n;a++)
 {
  if(str1[a]==b);
  {
   count++;
  }
  printf("The frequency of %c is %c",b,count);
 }
}
  
 
