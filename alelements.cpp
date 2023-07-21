#include<stdio.h>
int main(){
	
	int a[3][3], sum=0;
	for(int y=0; y<3; y++){
		for(int n=0; n<3; n++){
			scanf("%d", &a[y][n]);
		}
	}
	for(int y=0; y<3; y++){
		for(int n=0; n<3; n++){
			sum = sum + a[y][n] ;
		}
	}
	printf(" %d", sum);
}
