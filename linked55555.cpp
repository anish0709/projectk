#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;
	struct node *prev;  
    struct node *next;
};  
struct node *head;  
  
void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search();  
int main ()  
{  
    int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            lastinsert();         
            break;  
            case 3:  
            randominsert();       
            break;  
            case 4:  
            begin_delete();       
            break;  
            case 5:  
            last_delete();        
            break;  
            case 6:  
            random_delete();          
            break;  
            case 7:  
            search();         
            break;  
            case 8:  
            display();        
            break;  
            case 9:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
} 
 
void beginsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node *));  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item; 
        ptr->prev = NULL;
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted");  
}

void lastinsert(){
	struct node *ptr;
	struct node*temp=head;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node*));
	printf("\nEnter value\n");
	scanf("%d", &item);
	ptr->data=item;
	ptr->next=NULL;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=ptr->prev;
}

void randominsert(){
	struct node *ptr;
	struct node*temp=head;
	int item, y;
	ptr=(struct node*)malloc(sizeof(struct node*));
	printf("\nEnter value\n");
	scanf("%d", &item);
	ptr->data=item;
	printf("Enter the value of the node before which you want to take the action");
	scanf("%d", &y);
	while(temp->data!=y){
		temp=temp->next;
	}
	ptr->next=temp->next;
	ptr->prev=temp;
}
void begin_delete(){
	struct node*ptr;
	struct node*temp;
	temp=head;
	temp=temp->next;
	free(head);
	head=temp;
	head->prev=NULL;
}
void last_delete(){
	struct node*ptr=NULL;
	struct node*temp;
	temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	ptr=temp->next;
	free(ptr);
	temp->next=NULL;
}
void random_delete(){
	int y;
	struct node*temp=head;
	printf("ENTER THE NODE BEFORE WHICH YOU WANT TO INSERT");
	scanf("%d", &y);
	struct node*ptr=head;
	while(ptr->data!=y){
		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=temp->next->prev;
	free(temp);
}
void display(){
	struct node*ptr=head;
	while(ptr->next!=NULL){
		printf("%d", ptr->data);
		ptr=ptr->next;
	}
	printf("%d", ptr->data);
}
//void search(){
//	printf("ENTER THE VALUE WHICH YOU WANT TO SEARCH");
//	int c;
//	scanf("%d", &c);
//	struct node*temp=head;
//	while(temp->data!=c){
//		temp=temp->next;
//}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
