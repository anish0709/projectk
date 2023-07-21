#include<stdio.h>
int main(){
	
	int t=0, y, n;
	
	printf("Enter the no. : ");
	scanf("%d", &n);
	int c=n;
	while(n>0){
		y=n%10;
		n=n/10;
		t=t*10+y;
	}
	if(c==t){
		printf("palindrome\n");
	}
	else{
		printf("not found\n");
	}
}
