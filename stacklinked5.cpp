#include<stdio.h>
#include<stdlib.h>
#include<process.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node snode;

int main()
{ 
snode *start=NULL, *t, *n;
int choice;

while(1){
printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
int item;
scanf("%d", &choice);

switch(choice)
{
	case 1:
			n=(struct node*)malloc(sizeof(struct node*));
			printf("\nEnter Value : ");
			scanf("%d", &item);
			n->data=item;
			n->next=NULL;
			
			if(start==NULL)
	  			start=n;
	  		else
			  {
				n->next=start;
				start=n;
			  }
	break;
	
	case 2:
		if(start==NULL)
			printf("\nList is Empty");
		else
		{
		
		printf("POP\n");
		t=start;
		start=start->next;
		free(t);
		printf("\nNode Deleted Successfully");
		}
	break;
	
	case 3:
		t=start;
		while(t!=NULL)
		{
			printf("%d\n", t->data);
			t=t->next;
		}
			
		break;
		
	case 4:
		printf("EXIT\n");
		exit(0);
		break;
	}
  }
}
