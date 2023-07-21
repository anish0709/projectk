#include<stdio.h>
int main(){
	
	int a[3][3], k=0;
	
	for(int y=0; y<3; y++){
		for(int n=0; n<3; n++){
			scanf("%d", &a[y][n]);
		}
	}

		for(int y=0; y<3; y++){
			for(int n=0; n<3; n++){
			if(a[y][n]==a[n][y])
			k++;
			else
			continue;
		}
	}
	if(k==9)
	printf("matrix is symmetric");
	else
	printf("matrix is not symmetric");
}


