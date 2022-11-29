#include<stdio.h>
int i,j,k,r,array[50],n;
void merge(int array[],int p,int q,int r)
{
  int n1=q-p+1;
  int n2=r-q;
  int L[n1],M[n2];
  for(i=0;i<n1;i++)
  {
    L[i]=array[p+i];
  }
  for(j=0;j<n2;j++)
  {
    M[j]=array[q+1+j];
  }
  i=0;
  j=0;
  k=p;
  while(i<n1&&j<n2){
  if(L[i]<=M[j]){
  array[k]=L[i];
  i++;
  }
  else
  {
    array[k]=M[j];
    j++;
  }
  k++;
 }
 while(i<n1)
 {
   array[k]=L[i];
   i++;
   k++;
 }
 while(j<n2)
 {
   array[k]=M[j];
   j++;
   k++;
 }
}
void mergesort(int array[],int l,int r)
{
  if(l<r)
  {
    int m=l+(r-l)/2;
    mergesort(array,l,m);
    mergesort(array,m+1,r);
    merge(array,l,m,r);
  }
}
void printArray(int array[],int n)
{
  for(i=0;i<n;i++)
  printf("%d\t",array[i]);
}
int main()
{
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&array[i]);
  printf("Elements entered are:\n");
  printArray(array,n);
  mergesort(array,0,n-1);
  printf("\nSorted elements are:\n");
  printArray(array,n);
  printf("\n");
}
