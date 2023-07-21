#include<stdio.h>
int main(){
	int number, discount, price, amount;
	printf("Enter the number :");
	scanf("%d", &number);
	
	printf("Enter the price :");
	scanf("%d", &price);
	
	printf("Enter the discount :");
	scanf("%d", &discount);
	
	amount=(number*price)-discount;
	printf("%d", amount);
}
