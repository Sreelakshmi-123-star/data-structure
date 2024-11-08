#include<stdio.h>
#define max 10
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
{
if(front==-1&&rear==-1)
{
front=0;
rear=0;
queue[rear]=element;
}
else if((rear+1)%max==front)
{
printf("\nqueue is overflow\n");
}
else
{
rear=(rear+1)%max;
queue[rear]=element;
}
}
int dequeue()
{
if((front==-1)&&(rear==-1))
{
printf("\n Queue is underflow\n");
}
else if(front==rear)
{
printf("\nthe dequeue element is %d\n",queue[front]);
front=-1;
rear=-1;
}
else
{
printf("\nthe dequeue element is %d\n",queue[front]);
front=(front+1)%max;
}
}
void display()
{
int i=front;
if(front==-1&&rear==-1)
{
printf("\n Queue is empty");
}
else
{
printf("\nelements in the queue are:\n");
while(i<=rear)
{
printf("\n%d",queue[i]);
i=(i+1)%max;
}
}
}
int main()
{
int choice=1,x;
while(choice<4&&choice!=0)
{
printf("\nselect any option:\n1.Insert\n2.Delete\n3.Display");
printf("\nenter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nenter the element to be inserted\n");
scanf("%d",&x);
enqueue(x);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
default:
printf("\n invalid choice");
}
}
return 0;
}
