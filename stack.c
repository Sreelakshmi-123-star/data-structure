#include<stdio.h>
int S[100],element,size,top=-1,choice,i;
void push();
void pop();
void display();
int main()
{
int choice=1;
printf("\n STACK WITH ARRAY");
printf("\n enter the size of the stack(max 100):");
scanf("%d",&size);
while(choice<4&&choice!=0)
{
printf("\n\n press 1 to PUSH element");
printf("\n\n press 2 to POP element");
printf("\n\n press 3 to DISPLAY element");
printf("\n\n ENTER YOUR CHOICE:");
scanf("%d",&choice);
switch(choice)
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
}
}
}
void push()
{
if(top==size-1)
{
printf("\n stack is full!!");
}
else
{
printf("\n enter the element to push:");
scanf("%d",&element);
top++;
S[top]=element;
printf("\n Inserted:%d",element);
}
}
void pop()
{
if(top==-1)
{
printf("\n stack is empty!!");
}
else
{
printf("Deleted:%d",S[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n stack elements are given below");
for(i=top;i>=0;i--)
{
printf("\n %d",S[i]);
}
}
else
{
printf("\n stack is empty!!");
}
}


