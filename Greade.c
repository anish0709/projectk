#include<stdio.h>
int main()
{
	int n;
	printf("Enter the percentage : ");
	scanf("%d", &n);
	
	if(n>=90)
	printf("A1");
	
	else if( n>=80)
	printf("A2");
	
	else if( n>=70)
	printf("A3");
	
	else if( n>=60)
	printf("A4");
	
	else
	printf("A5");
}
