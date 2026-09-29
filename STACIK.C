#include<stdio.h>
#include<conio.h>
void main()
{
	int stack[10],n,top=-1,i,ch,val;
	do
	{
		printf("1:push\n 2: pop\n 3:display\n 4:exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:		if(top==n-1)
					{
					       printf(" overflow");

					}
					else
					{
						top++;
					       printf("enter data :");
					       scanf("%d",&stack[top])
					}

				break;
			case 2:
				if (top==-1)
				{
					printf("stack is empty");
				}
				else
				{
					printf("%d element is deleting..",stack[top]);
					top--;
				}
				break;

			case 3:
				if (top==-1)
				{
					printf("stack is empty");
				}
				else
				{
					for(i=top;i>0;i--)
					{
						printf("Element of stack is %d\n",stack[i]);
					}
				}
				break;
			case 4: printf("Exitting.........");
				break;
			default: printf("invalid chice ");
				break;
		}
	}while(ch!=4);
getch();
clrscr();
}