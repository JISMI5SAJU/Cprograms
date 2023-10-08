#include<stdio.h>
void rev(char name[100]);
void main()
{
char name[200];
printf("Enter name");
scanf("%s",name);
rev(name);
}
void rev(char name[100])
{
char rev[100];
int i,l,j=0;
for(l=0;name[l]!='\0';l++);
{
for(i=(l-1);i>=0;i--)
  {
   rev[j++]=name[i];
  }
 printf("%s",rev);
}
}

