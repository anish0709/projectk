#include<stdio.h>
int main(){
	
	int y, c, n;
	printf("Enter the no. whose sum from 0 is to be printed : ")
	scanf("%d", &y);
	c=0;
	for(n=0; n<y; n++){
		c=c+n;
	}
		printf("The sum : %d ", c);
}
