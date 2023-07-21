#include<stdio.h>
int main(){
	
	int y, m, n[5], sum=0, k=0;
	for(y=0; y<6; y++){
		scanf("%d", &n[y]);
	}
	
	for(int b=0; b<6; b++){
		if (n[b]==n[b+1]){
		sum=sum+1;
		k=n[b];
		 m=b;
	}
		else
		continue;
	}
	printf("%d is present %d times at %d and %d", k, sum+1, m, m+1);
}
