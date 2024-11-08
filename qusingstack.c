#include<stdio.h>
int A[20],n,top,x,i;
void PUSH();
void POP();
void DISPLAY();
int main()
{
	top=-1;
	int opt;
	printf("enter the size of the queue :\t");
	scanf("%d",&n);
	printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
do
	{
	printf("\nselect the option :\t");
	scanf("%d",&opt);
switch(opt)
	{
	case 1:
	PUSH();
	break;
	case 2:
	POP();
	break;
	case 3:
	DISPLAY();
	break;
	case 4:
	printf("EXIT\n");;
	break;
	default:
	printf("invalid option");
	}
}
while(opt!=4);
return 0;
}
void PUSH()
{
	if(top==n-1)
	{
	printf("queue is full\n");
	}
	else
		{
		printf("\n enter value to be pushed :\t");
		scanf("%d",&x);
		top++;
		A[top]=x;
		}
}

void POP()
{
	if(top==-1)
	{
	printf("queue is empty");
	}
	else
		{
		printf("\n\t popped element is %d",A[top]);
		top--;
		}
}
void DISPLAY()
{
		if(top>=0)
		{
		printf("\n the elements in queue\n");
		for(i=top;i>=0;i--)
		printf("\n%d \n",A[i]);
		}
		else
		{
		printf("\n QUEUE is empty");
		}
		}
