#include<stdio.h>
int main(){
	
	int a[10], b, c;
	for(int y=0; y<=9; y++){
		scanf("%d",a[y]);
	}
	printf("enter the element to search");
	scanf("%d", &b);
	for(y=0; y<=9; y++){
		if(a[y]==b)
		printf("element found at %d", y+1);
		else
		printf("not found");
	}
	
}
