#include<stdio.h>

int sum(int x[3][3],int y[3][3])
{
	for(int k=0; k<3; k++){
		for(int n=0; n<3; n++){
			scanf("%d", &x[k][n]);
		}
	}

	for(int k=0; k<3; k++){
		for(int n=0; n<3; n++){
			scanf("%d", &y[k][n]);
		}
	}
	
	int g[3][3];
	
	for(int k=0; k<3; k++){
		for(int n=0; n<3; n++){
			g[k][n] = x[k][n] + y[k][n];
			printf("%d", g[k][n]);
		}
	}
}
int main()
{   
    
	int a[3][3],b[3][3];
	sum(a,b);
	
}
