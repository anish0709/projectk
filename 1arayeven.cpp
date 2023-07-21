#include<stdio.h>
int main(){
	
	int y, n[5], sum=0, k=0;
	for(y=0; y<6; y++){
		scanf("%d", &n[y]);
	}
	
	for(int b=0; b<6; b++){
		if (n[b]%2==0)
		k=k+n[b];
		else
		continue;
	}
	printf("\n%d", k);
}
