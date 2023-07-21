#include<stdio.h>
int main(){
	
	int a[5], g[5], y, n[5];
	for(y=0; y<3; y++){
		scanf("%d", &a[y]);
	}

	for(y=0; y<3; y++){
		scanf("%d", &n[y]);
	}
	
	for(int y=0; y<3; y++){
		printf("%d", a[y]);
	}
	
	for(int y=0; y<3; y++){
		printf("%d", n[y]);
	}
	
	for(int y=0; y<3; y++){
		g[y] = a[y] + n[y];
		printf("\n%d", g[y]);
	}
