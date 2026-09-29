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
	struct node * top = NULL, * newnode, * temp;
	int ch;


	do
	{
		printf("\n1: Push\n2: Pop\n3: Display\n4: Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				newnode = (struct node*) malloc(sizeof(struct node));
				if(newnode == NULL)
				{
					printf("Heap Overflow!\n");
					break;
				}
				printf("Enter data: ");
				scanf("%d", &newnode->data);
				newnode->next = top;
				top = newnode;
				break;

			case 2:
				if(top == NULL)
				{
					printf("Stack underflow!\n");
				}
				else
				{
					temp = top;
					printf("Popped element: %d\n", temp->data);
					top = top->next;
					free(temp);
				}
				break;

			case 3:
				if(top == NULL)
				{
					printf("Stack is empty!\n");
				}
				else
				{
					temp = top;
					printf("Stack elements:\n ");
					while(temp != NULL)
					{
						printf("%d\n ", temp->data);
						temp = temp->next;
					}

				}
				break;

			case 4:
				printf("Exiting...\n");
				break;

			default:
				printf("Invalid choice!\n");
				break;
		}
	} while(ch != 4);

	getch();
	clrscr();
}
