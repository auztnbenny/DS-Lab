#include<stdio.h>
void main()
{
int i,j,n,a[100],temp=0,count=0;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    count++;
  }count++;
for(i=0;i<n;i++)
{
count++;
 for(j=0;j<n-i-1;j++)
  {
  count++;
   if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      count++;
      }count++;
    }count++;
  }count++;
printf("sorted array is:");
for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
  count++;
 }count++;
 printf("\ntime complexity is %d\n",count);
 printf("space complexity is %d\n",20+4*n);
 
 
}

