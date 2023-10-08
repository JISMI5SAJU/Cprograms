#include<stdio.h>
void main()
{
 int lim,i,j,temp;
 printf("Enter limit");
 scanf("%d",&lim);
 int a[lim];
 printf("Enter array elements:");
 for(i=0;i<lim;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<lim;i++)
 {
  for(j=i+1;j<lim;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
 }
  printf("The sorted array is %d\n);
  for(i=0;i<lim;i++)
  printf("%d\n",a[i]);
 }
