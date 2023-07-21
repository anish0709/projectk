#include<stdio.h>
int main(){
	
	int e, y, n, c=0;

	printf("Enter the no. : ");
	scanf("%d", &n);
	while(n>0){
		y=n%10;
		c=c+y;
		n=n/10;
	}
	printf("The sum of digits is : %d", c);
	
}
