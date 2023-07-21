#include<stdio.h>
int main(){
	
	int y, n[3], sum=0;
	for(y=0; y<4; y++){
		scanf("%d", &n[y]);
	}
	for(y=0; y<4; y++){
		sum=sum + n[y];
	}
	printf("%d", sum);
}
