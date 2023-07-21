#include<stdio.h>
int main(){
	
	int b, n, c, y;
	c=0;
	printf("Enter the no., how many times you have to sum ");
	scanf("%d", &y)
	for(n=0; n<y; n++){
			printf("Enter the no. whose sum from 0 is to be printed : ");
			scanf("%d", &b);
			c=c+b;
	}
		printf("The sum : %d ", c);
}

