#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,node,n,size;
	char array[100];
	printf("Enter the height of tree:");
	scanf("%d",&n);
	printf("\nEnter the root node:");
	scanf("%s",&array[0]);
	node=(n*n)-2;
	printf("\nEnter '-' in case of empty node");
	for(i=0;i<node+1;i++){
		if(array[i]!='-')
		{
			printf("\nLeft child of %c:",array[i]);
			scanf("%s",&array[(2*i)+1]);
			printf("\nRight child of %c:",array[i]);
			scanf("%s",&array[(2*i)+2]);
		}
		else{
			array[(2*i)+1]='-';
			array[(2*i)+2]='-';
		
		}
	}
	printf("\nTree representation using array:");
	size=n+1;
	size=(size*size)-2;
	for(i=0;i<size;i++)
	{
		printf("\t%c\t",array[i]);
	}
	printf("\n");
	return 0;

}
