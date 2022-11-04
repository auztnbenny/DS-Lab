#include<stdio.h>
#include<stdlib.h>
int stack[100],size,top,option;
void push();
void pop();
void display();

void main()
{
top=-1;
printf("\nEnter the size of stack:");
scanf("%d",&size);


do{
printf("\n 1=PUSH");
printf("\n 2=POP");
printf("\n 3=DISPLAY");
printf("\n 4=EXIT");
printf("\nselect your option:");
scanf("%d",&option);
switch(option)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("\ninvalid option");
break;
}
}while (option!=4);
}

void push()
{
if(top>=size-1)
{
printf("\nStack is overflow condition");
}
else
{
top++;
printf("\nEnter the value to push");
scanf("%d",&stack[top]);
}
}


void pop()
{
if (top<=-1)
{
printf("\n Stack is underflow condition");
}
else
{
printf("\n %d is popped",stack[top]);
top--;
}
}

void display()
{
if (top>=0)
{
printf("\nelements in stack is");
for (int i=top;i>=0;i--)
printf("\n%d",stack[i]);
}
else {
printf("\nThe stack is empty\n");
}
}

