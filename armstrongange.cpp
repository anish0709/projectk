#include<stdio.h>
int main(){
	
	int e, y, n,c,k;
	
	for(int b=100; b<16000; b++){
	c=0;
	n=b;
	while(n>0)
	{
		y=n%10;
		n=n/10;
		c=c+y*y*y;
		
	}
	
	if(b==c)
		printf("\n\t%d",b);
  }
}


