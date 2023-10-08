#include<stdio.h>
void sum(int a[10],int *lim);
void main()
{
 int lim,a[10];
 printf("Enter the lim");
 scanf("%d",&lim);
 sum(a,&lim);
 }
 void sum(int a[10],int *lim)
 {
  int i,sum;
  printf("Enter the values");
  for(i=0;i<*lim;i++)
  scanf("%d",&a[i]);
  for(i=0;i<*lim;i++)
  sum=sum+a[i];
  printf("Sum is %d\n",sum);
}
 
