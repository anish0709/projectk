#include<stdio.h>
int main(){
	int a[5], b[5], c[10], n, y, g, k;
	printf("enter the size of aray 1");
	scanf("%d", &n);
	for(int y=0; y<n; y++){
		scanf("%d", &a[y]);
	}
	printf("enter the size of aray 2");
	scanf("%d", &g);
	for(int k=0; k<g; k++){
		scanf("%d", &b[k]);
	}
	
	for(int y=0; y<n; y++){
			c[y]=a[y];
	}
	for(int j=n; j<n+g; j++){
		c[j]=b[j-n];
	}
	
	for(int j=0; j<n+g; j++){
	printf("%d", c[j]);
	}
}
