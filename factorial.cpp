#include<stdio.h>
int main(){
	int k, y, w, c;
	for(y=1; y<=10; y++){
		int fact=1;
		c=y;
		while(c>0)
		{
		fact=fact*c;
		c--;
		}
		printf("%d\n", fact);
	}
}
