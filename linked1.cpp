#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
	int data;
	struct node *next;
};
struct node*head;
void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();
void display();  
void search();  

void beginsert(){
	int item;
	struct node*ptr;
	printf("ENTER VALUE");
	scanf("%d", &item);
	ptr=(struct node*)malloc(sizeof(struct node*));
	ptr->data=item;
	ptr->next=head;
	head=ptr;
	printf("\nNODE INSERTED");
}
void lastinsert(){
	int item;
	struct node*ptr;
	struct node*temp;
	printf("ENTER VALUE");
	scanf("%d", &item);
	ptr=(struct node*)malloc(sizeof(struct node*));
	ptr->data=item;
	temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=ptr;
	ptr->next=head;
	printf("NODE INSERTED");
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
	temp->next=ptr;
	printf("\nNode inserted");  
}
void begin_delete(){
	struct node*ptr;
	struct node*temp=head;
	ptr=temp->next;
	while(temp->next!=head){
		temp=temp->next;
	}
		free(head);
		temp->next=ptr;
}
void last_delete(){
	struct node*temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=head;
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
	ptr->next=temp->next;
	free(temp);
}
void display(){
	struct node*ptr=head;
	while(ptr->next!=head){
		printf("%d", ptr->data);
	}
	printf("%d", ptr->data);
}

void search(){
	printf("ENTER THE VALUE WHICH YOU WANT TO SEARCH");
	int c;
	scanf("%d", &c);
	struct node*temp=head;
	while(temp->data!=c){
		temp=temp->next;
	}
}

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
 
