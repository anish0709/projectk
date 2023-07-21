#include<stdio.h>
int main(){
	
int y,j,k;

for(y=5;y>=1;y--)
{
	for(k=5;k>=y;k--)
	{
	printf(" ");
	}
	
	for(j=y;j>=1;j--)
		{
		printf("*");
		}
	printf("\n");
	}

}

