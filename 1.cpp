#include<stdio.h>
int main(){
	
	int a[3][3];
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			if(a==b)
			printf(" 1");
			else
			printf(" 0");
		}
		printf("\n");
	}
}
