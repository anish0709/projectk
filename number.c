#include<stdio.h>
int a, b, c, n;
int main()
{
	printf("Enter the number: ");
	scanf("%d", &a);
	n=a%10;
	
	b=(a/10)%10;
	
	c=a/100;
	
	printf("%d\n", n);
	printf("%d\n", b);
	printf("%d", c);
}
