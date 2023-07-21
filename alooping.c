#include<stdio.h>
int main(){
	int i, t, m, j, y, n, k, b;
	for(i=1; i<=10; i++){
		printf("%d ", i);
	}
	
	printf("\nEnter the number : ");
	scanf("%d", &n);
	for(t=0; t<=n; t++){
		printf("%d ", t);
	}
	
	printf("\nEnter the number : ");
	scanf("%d", &b);
	for(k=1; k<b; k++){
		k++;
	printf("%d ", k);
    }
    
    printf("\nEnter the number : ");
	scanf("%d", &b);
	for(k=0; k<b; k++){
		k++;
	printf("%d ", k);
    }
    
    for(j=1; j<=6;){
    	m=j*j;
    	printf("%d", m);
	}
    
}
