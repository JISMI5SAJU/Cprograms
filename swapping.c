#include<stdio.h>
int swap(int *a,int *b);
void main()
{
 int x,y;
 printf("Enter two no");
 scanf("%d%d",&x,&y);
 printf("Before swapping x=%d,y=%d\n",x,y);
 swap(&x,&y);
 printf("After swapping x=%d ,y=%d",x,y);
 }
 int swap(int *a,int *b)
 {
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
 return 0;
}
 
 
