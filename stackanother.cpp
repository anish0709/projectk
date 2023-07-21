#include<stdio.h>
#include<process.h>
#define MAX 10
int main(){
	int a[MAX], front=0, rear=-1, c, n;
	while(1){
	printf("1.push at top \n2.push at bottom \n3.display \n3.top element \n4.remove from top \n5.remove from bottom \n6.exit\n");
	scanf("%d", &n);
	switch(n){
		case 1:
			if(rear==MAX-1){
				printf("\noverflow");
			}
			else{
			rear++;
			scanf("%d", &a[rear]);
			}
		    break;

		case 2:
			if(rear==MAX-1){
				printf("\noverflow");
			}
			else{
			for(c=rear; c>front; c--){
				a[c+1]=a[c];
			}
			scanf("%d", &a[front]);
			rear++;
		}
			
		case 3:
		for(c=front; c<=rear; c++){
			printf("%d\n", a[c]);
		}
		    break;
		
		case 4:
			if(rear==-1){
				printf("\nunderflow");
			}
			else{
			printf("%d removed from top\n", a[rear]);
			rear--;
			}
		    break;
		
		case 5:
			if(rear==-1){
				printf("\nunderflow");
			}
		    else{
		    printf("%d removed from bottom\n", a[front]);
			front++;
			}
		    break;
		
		case 6:
			exit(0);
			break;
      }
   }
 }





//dylanjordan
