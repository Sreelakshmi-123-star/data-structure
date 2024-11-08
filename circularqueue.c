int front=1;rear=-1;
int isfull()
{
if((front==rear+1)||(front==0&&rear==size-1))
	return 1;
	return 0;
}
int isempty()
{
if(front==-1)
	return 1;
	return 0;
}
void enqueue(int element)
{
if(isfull())
printf("\n queue is full!!\n");
else
{
if(front==-1)
front=0;
rear=(rear+1)%size;
Q[rear]=element;
printf("\n inserted:%d",element);
}
}
int dequeue()
{
int element;
if(isempty())
{
printf("\n queue is empty!!\n");
return (-1);
}
else
{
element=Q[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%size;
}
printf("\n deleted element:%d\n",element);
return(element);
}
}
void display()
{
int i;if(isempty())
printf("\n empty queue\n");
else
{
printf("\n front:%d",front);
printf("\n Q:");
for(i=front;i!=rear;i=(i+1)%size)
{
printf("%d\t",Q[i]);
}
printf("%d",Q[i]);
printf("\n rear:%d\n",rear);
}
}
int main()
{
int choice=1,element;
while(choice<5&&choice!=0)
{
printf("\n press 1 to insert element");
printf("\n press 2 to delete element");
printf("\n press 3 to display element");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("\n enter the element to insert:");
		scanf("%d",&element);
		enqueue(element);
		break;
	case 2:
		dequeue();
		break;
	case 3:
		display();
		break;
	default:
		printf("enter valid option");
}
}
return 0;
}
