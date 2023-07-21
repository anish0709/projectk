#include<stdio.h>
int main(){
	int a[5], e, c;
	printf("Enter the numbers");
	for(int e=1; e<6; e++){
	scanf("%d", &a[e]);
	}
	for(e=1; e<6; e++){
		int fact=1;
		c=a[e];
	while(c>0)
		{
		fact=fact*c;
		c--;
		}
		printf("%d\n", fact);
	}
	
}
