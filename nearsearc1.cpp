#include<stdio.h>
int main(){
	
	int a[10], b, c;
	for(int c=0; c<=9; c++){
		printf("Enter the value :");
		scanf("%d",&a[c]);
	}
	printf("enter the element to search :");
	scanf("%d", &b);
	for(c=0; c<=9; c++){
		if(a[c]==b){
		printf("element found at %d ", c+1);
		break;
	}
		else
		printf("not found");
	}
}
