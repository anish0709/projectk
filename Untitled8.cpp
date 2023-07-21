#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
typedef struct node snode;
int main()
{ 
snode *start, *t, *n, *temp;
int choice, y;
start=NULL;
while(1){
printf("1.first me dalna\n2.mid me dalna\n3.last me dalna\n4.remove karna(first)\n5.remove karna(mid)\n6.remove karna(last)\n7.show");
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
			  	while(t->next!=start)
				{
					t=t->next;
				}
				t->next=n;
				n->next=start;
				start=n;		
			}
	break;
	
	case 2:
			n=(snode*)malloc(sizeof(snode));
			printf("\nEnter Value : ");
			scanf("%d", &item);
			n->data=item;
			printf("enter the value of the node before which you want to take the action");
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
		t=start;
		n=(snode*)malloc(sizeof(snode));
		printf("\nEnter Value : ");
		scanf("%d", &item);
		
		n->data=item;
		while(t->next!=start)
		{
			t=t->next;
		}
			t->next=n;
			n->next=start;
			
		break;
		
	case 4:
		t=start;
		temp=start;
		start=start->next;
		while(t->next!=start)
		{
			t=t->next;
		}
		t->next=start;
		free(temp);
	break;
	case 5:
		printf("enter the value of the node before which you want to take the action");
		scanf("%d", &y);
		    t=start;
			while(t->data!=y)
			{
				t=t->next;
			}
			t->next=t->next->next;
			break;
						
	case 6:
		t=start;
		while(t->next->next!=start){
			t=t->next;
		}
		free(t->next);
		t->next=start;
		break;
	
	case 7:
		t=start;
		while(t->next!=start){
			printf("%d", t->data);
			t=t->next;
		}
		printf("%d", t->data);
		break;
	}
  }
}
