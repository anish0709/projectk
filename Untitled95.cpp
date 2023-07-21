//Doubly Linkedli

#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
};
typedef struct node snode;
int main()
{ 
snode *start=NULL, *t, *n;
int choice, y;

while(1){
printf("1.first me dalna\n2.mid me dalna\n3.last me dalna\n4.remove karna(first)\n5.remove karna(mid)\n6.remove karna(last)\n7.show\n8.exit");
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
			n->prev=NULL;
			if(start==NULL)
	  			start=n;
	  		else
			  {
				n->next=start;
				start=n;
				t=start;
				while(t->next!=NULL){
					t=t->next;
					t->next=start->prev;
				}
			  }
	break;
	
	case 2:
			n=(snode*)malloc(sizeof(snode));
			printf("enter the value of the node after which you want to take the action");
			scanf("%d", &y);
			t=start;
			while(t->data!=y)
			{
				t=t->next;
			}
			printf("\nEnter Value : ");
			scanf("%d", &item);
			n->data=item;
			n->next=t->next;
			t->next=n->prev;
			
	break;
	
	case 3:
		t=start;
		n=(snode*)malloc(sizeof(snode));
			printf("\nEnter Value : ");
			scanf("%d", &item);
			n->data=item;
			n->next=NULL;
		while(t->next!=NULL)
		{
			t=t->next;
		}
			t->next=n->prev;
		break;
		
	case 4:
		t=start;
		start=start->next;
		start->prev=NULL;
		while(t->next->next!=NULL){
			t=t->next;
		}
		t->next=start;
		free(start);
		break;
	
	case 5:
		printf("enter the value of the node before which you want to take the action");
		scanf("%d", &y);
		    t=start;
			while(t->data!=y)
			{
				t=t->next;
			}
			t->next=t->next->next->prev;
			free(t);
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
	while(t->next!=NULL) {
		printf("%d", t->data);
		t=t->next;
	}
	printf("%d", t->data);
	break;
	}
  }
}
