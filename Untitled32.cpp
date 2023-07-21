#include<stdio.h>
int main(){
	
	int e, y, n;
	
	printf("Enter the no. : ");
	int c=0;
	scanf("%d", &n);
	while(n>0){
		y=n%10;
		n=n/10;
		c=c+y*y*y;
	}
	printf("the sum of cube is %d", c);
}


