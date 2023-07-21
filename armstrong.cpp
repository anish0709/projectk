#include<stdio.h>
int main(){
	int n, b, y;
	scanf("%d", &n);
	int c=0;
    b=n;
	while(n>0)
	{
		y=n%10;
		n=n/10;
		c=c+y*y*y;
	}
	
	if(b==c)
		printf("Armstrong");
	else
		printf("not a arm");

}
