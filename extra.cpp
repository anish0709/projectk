#include<stdio.h>
int main(){
	int a[50], i;
	
	printf("Enter the size of array");
	scanf("%d", &n);
	
	printf("Enter the elements of array\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i])
	}
	
	printf("\n");
	
	for(i=0; i<5; i++)
	{
		printf("%d\n", a[i]);
	}
	
	return 0;
}
