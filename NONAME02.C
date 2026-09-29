#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
void main()
{
	struct node * top=0,newnode;
	int ch;
	do
	{
		printf("1:push\n 2:pop\n 3:display\n 4:exit");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				newnode=(struct node *) malloc(sizeof (struct node);
				printf("enter data :");
				scanf("%d",&newnode->data);
				newnode->next =top;
				top=newnode;
			case 2:
				if(top=0)
				{
					printf("stack is underflow:");
				}
				else
				{
					temp=top;
					top=top->next;
					free(temp);
				}
			case 3:
				while(top!=0);
				{
					printf("%d",top->data);
					top = top->next;
					temp=top;
				}
			case 4:
				printf("Exiting........");
			default:
				printf("invalid number :");
	}while(ch!=4);
	getch();
	clrscr();
}



