#include<stdio.h>
#include<stdlib.h>
#include<process.h>


struct node{
	int no;
	struct node *next;
};

int main()
{
typedef struct node snode;
snode *temp, *t,*start,*n,*pre;
int i,count,k;
start=NULL;
pre=NULL;
	
		printf("\nEnter How Many Elements in List");
		scanf("%d",&count);
		printf("\nEnter %d Element in First List",count);
		for(i=1;i<=count;i++)
		{
				n=(snode*)malloc(sizeof(snode));
				printf("\nEnter Value For Node : ");
				scanf("%d",&n->no);
				n->next=NULL;
				if(start==NULL)
					{
						start=n;
						t=start;
					}
				else
					{
						t->next=n;
						t=t->next;
					}
		}
	
		printf("Enter the Element to Enter");
		scanf("%d",&k);
		n=(snode*)malloc(sizeof(snode));
		n->no=k; 
		t=start;
		n->next=NULL;
		
		if(n->no>t->no)
		{
			pre=NULL;
			while(t->no<n->no && t!=NULL)
			{
				pre=t;
				printf("\npre => %d ",pre->no);
				t=t->next;
				printf("\t t => %d ",t->no);
			}
			
			temp=pre->next;
			pre->next=n;
			n->next=temp;
			
			t=start;
			while(t!=NULL)
			{
				printf("\n%d",t->no);
				t=t->next;
			}
			
			/*
			while(t->next->no<=k && t->next!=NULL)
			{
				printf("test  %d",t->no);
				t=t->next;
				
			}
			if(t->next==NULL)
			{
				t->next=n;
				n->next=NULL;
			}
			else
			{
				temp=t->next;
				t->next=n;
				n->next=temp;
			}
			*/		
		}
		
		else
		{
			     n->next=start;
				 start=n;		
		}
		
		printf("\nElements are : ");
		t=start;
		while(t!=NULL)
			{
				printf("\n%d",t->no);
				t=t->next;
			}
			
return 0;		
}
