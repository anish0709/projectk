#include<stdio.h>
#include<process.h>
//#define MAX 50
int main(){
	int a[10], j, c, top=-1, max=10;
	
	while(1)
	{
	printf("Enter the choice");
	printf("\n1.PUSH");
	printf("\n2.PEEK");
	printf("\n3.POP");
	printf("\n4.DISPLAY");
	printf("\n5.EXIT\n");
	scanf("%d", &c);
	switch(c)
	{
		case 1:
		if(top==max-1)
		{
			printf("Array is full");
		}
		
		else
		{
			top++;
			scanf("%d", &a[top]);
		}
		break;
		case 2:
				if(top==-1)
					printf("\nStack Underflow");
				else
					printf("\nTop Value Is %d",a[top]);
		break;
		case 3:
				if(top==-1)
					printf("\nStack Undeflow");
				else
				{
				printf("\nPop Value Is %d",a[top]);
				top--;
				}
		break;
		case 4:
			for(j=top; j>=0; j--)
			{
				printf("\n\t%d", a[j]);
			}
		break;
		
		case 5:
			exit(0);
		break;
		}
	}
}
