#include<stdio.h>
int i,a[50];
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
void heapify(int a[],int n,int i)
{
  int largest=i;
  int left=2*i+1;
  int right=2*i+2;
  if(left<n&&a[left]>a[largest])
  largest=left;
  if(right<n&&a[right]>a[largest])
  largest=right;
  if(largest!=i)
  {
    swap(&a[i],&a[largest]);
    heapify(a,n,largest);
  }
}
void heapsort(int a[],int n)
{
  for(i=n/2-1;i>=0;i--)
  heapify(a,n,i);
  for(i=n-1;i>=0;i--)
  {
    swap(&a[0],&a[i]);
    heapify(a,i,0);
  }
}
void printArray(int a[],int n)
{
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
int main()
{
  int n;
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  printf("Enter the elements: \n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Elements entered are:\n");
  printArray(a,n);
  heapsort(a,n);
  printf("\nSorted elements are:\n");
  printArray(a,n);
  printf("\n");
}
