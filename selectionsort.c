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
 for(j=i+1;j<n;j++)
  {
  count++;
   if(a[i]>a[j])
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      count++;
      }count++;
    }count++;
  }count++;
printf("sorted array:");
for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
  count++;
 }count++;
 printf("\ntime complexity is %d\n",count);
 printf("space complexity is %d\n",20+4*n);
 
 
}

