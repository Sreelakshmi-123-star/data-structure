#include<stdio.h>
int Q[100],element,size,front=-1,rear=-1,choice=1,i;
void enqueue();
void dequeue();
void display();
int main()
{
printf("\n queue");
printf("enter the size of the queue(max 100):");
scanf("%d",&size);
printf("\n1.Insert\n2.Delete\n3.Display");
while(choice<5&&choice!=0)
{
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
	enqueue();
	break;
case 2:
	dequeue();
	break;
case 3:
	display();
	break;
default:
	printf("\n enter valid choice");
}
}
}
void enqueue()
{
if(rear==size-1)
{
printf("\n queue is full!!");
}
else if(front==-1&&rear==-1)
{
front=0;
rear=0;
printf("\n enter the element to insert:");
scanf("%d",&element);
Q[rear]=element;
printf("\n inserted %d",element);
}
else
{
rear++;
printf("\n enter the element to insert:");
scanf("%d",&element);
Q[rear]=element;
printf("\n inserted %d",element);
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("\n queue is empty!!");
}
else if(front==rear)
{
element=Q[front];
printf("\n deleted %d",element);
front==-1;
rear==-1;
}
else
{
element=Q[front];
printf("\n deleted %d",Q[front]);
front++;
}
}
void display()
{
if(front==-1&&rear==-1)
{
printf("\n queue is empty!!");
}
else
{
printf("\n front:%d\n",front);
for(i=front;i<=rear;i++)
{
printf("%d\t",Q[i]);
}
printf("\n rear:%d",rear);
}
}
