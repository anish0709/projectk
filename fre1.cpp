#include<stdio.h>
int main(){
	
	int a[6], m, k=0, b, c;
	for(c=0; c<6; c++){
		scanf("%d", &a[c]);
	}
	printf("Enter the element to search :");
	scanf("%d", &b);
	for(int n=0; n<6; n++){
		if(b==a[n]){
		k++;
		printf("\n%d", n+1);
	}
		else
		continue;
	}
	printf("%d is present %d times", b, k);
}
