#include<stdio.h>
#include<stdlib.h>
#include<process.h>

struct node
{
	int data;
	struct node*next;
};

typedef struct node snode;

int main()
{ 
snode *start=NULL, *t, *n, *temp;
int choice, y;

while(1){
printf("1.first me dalna\n2.mid me dalna\n3.last me dalna\n4.remove karna(first)\n5.remove karna(mid)\n6.remove karna(last)\n7.show\n8.Exit");
int item;
scanf("%d", &choice);

switch(choice)
{
	case 1:
			n=(snode*)malloc(sizeof(snode));
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
			n=(snode*)malloc(sizeof(snode));
			printf("\nEnter New Node Value : ");
			scanf("%d", &item);
			n->data=item;
			n->next=NULL;
			
			printf("Enter the value of the node after which you want to take the action\n");
			scanf("%d", &y);
			t=start;
			while(t->data!=y)
			{
				t=t->next;
			}
			
			n->next=t->next;
			t->next=n;
			
	break;
	
	case 3:
		n=(snode*)malloc(sizeof(snode));
		printf("\nEnter New Node Value : ");
			scanf("%d", &item);
			n->data=item;
			n->next=NULL;
			
		t=start;
		while(t->next!=NULL)
		{
			t=t->next;
		}			
			t->next=n;
			n->next=NULL;
		break;
		
	case 4:
		t=start;
		start=start->next;
		free(t);
	break;
	
	case 5:
		printf("enter the value of the node which you want to delete ");
		scanf("%d", &y);
		    t=start;
			while(t->next->data!=y)
			{
				t=t->next;
			}
		
			temp=t->next->next;
			free(t->next);
			t->next=temp;
					
	break;
						
	case 6:
		t=start;
		while(t->next->next!=NULL){
			t=t->next;
		}
		free(t->next);
		t->next=NULL;
	break;
	
	case 7:
		t=start;
		while(t!=NULL)
		{
			printf("\n%d", t->data);
			t=t->next;
		}		
	break;
	
	case 8:
		exit(0);
		break;
	}
  }
}
