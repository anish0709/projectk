#include<stdio.h>
int main(){
  float amt,tax,sc,ec,net_tax;
  char n;
  	printf("Enter your gender : ");
	scanf("%c", &n);
  	if(n=='m'){
	printf("male\n");
	printf("Enter the amount : "); 
	scanf("%f", &amt);
	
	if(amt<=300000)
		tax=0;
	else if(amt<=500000)
		tax=(amt-300000)*.1;
	else if (amt<=700000)
		tax=20000+(amt-500000)*.2;
	else
		tax=60000+(amt-700000)*.3;
		
	ec=tax*.0001;
	if(tax>1000000)
		sc=tax*.01;
	else
		sc=0;
		
		net_tax=tax+ec+sc;
	printf("Tax Is %f",tax);
}
  
	else{
		printf("Female\n");
		printf("Enter the amount : "); 
	scanf("%f", &amt);
	
	if(amt<=350000)
		tax=0;
	else if(amt<=550000)
		tax=(amt-350000)*.1;
	else if (amt<=750000)
		tax=20000+(amt-550000)*.2;
	else
		tax=60000+(amt-750000)*.3;
		
	ec=tax*.0001;
	if(tax>1000000)
		sc=tax*.01;
	else
		sc=0;
		net_tax=tax+ec+sc;
	printf("Tax Is %f",tax);
  
	}
}
	
