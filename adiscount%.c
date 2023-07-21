#include<stdio.h>
int main(){
	int number,discount, price,amt,disamt,net_amt;
	printf("Enter the number :");
	scanf("%d", &number);
	
	printf("Enter the price :");
	scanf("%d", &price);
	
	printf("Enter the discount % :");
	scanf("%d", &discount);
	
	amt=(number*price);
	
	disamt=(amt*discount)/100;
	net_amt=amt-disamt;
	printf("\nGross Amount Is %d", amt);
	printf("\nDiscoutn Amount Is %d",disamt);
	printf("\nNet Bill Amount Is %d",net_amt);
}

