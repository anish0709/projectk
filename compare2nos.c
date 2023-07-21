#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter 2 nos\n");
	scanf("%d%d", &a, &b);
	
	if(a>b)
		printf("%d Is Greater", a);
	else if(a<b)
		printf("%d Is Greater", b);
	else
		printf("Both Are Equal", a);
	
}
