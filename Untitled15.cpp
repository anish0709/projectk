#include<stdio.h>
int main(){
	
	int a[3][3];
	for(int y=0; y<3; y++){
		for(int n=0; n<3; n++){
			scanf("%d", &a[y][n]);
		}
	}
	
	int b[3][3];
	for(int y=0; y<3; y++){
		for(int n=0; n<3; n++){
		b[y][n]=a[y][n];
		}
	}
		for(int y=0; y<3; y++){
		for(int n=0; n<3; n++){
			printf("%d", b[y][n]);
		}
		printf("\n");
	}
}


