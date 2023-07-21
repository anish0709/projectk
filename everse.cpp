#include<stdio.h>
int main(){
	
	int e, y, n;
	
	printf("Enter the no. : ");
	scanf("%d", &n);
	while(n>0){
		y=n%10;
		printf("%d", y);
		n=n/10;
	}
}
