#include<stdio.h>
int main(){
	
	int a, i, b, c;
	a=0; b=1;
	printf("the values are 0\n");
	for(i=0; i<6; i++){
		a=b;
		b=c;
		c=a+b;
		printf("the values are %d\n", c);
	}
}
