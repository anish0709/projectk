#include<stdio.h>
int main(){
	int f,g,e,t,y,n;
printf("Enter lower range : \n");
scanf("%d", &f);
printf("Enter upper range : \n");
scanf("%d", &g);
for(int k=f; k<=g; k++)
{
	n=k;
	t=0;	
	while(n>0)
	{
		y=n%10;
		n=n/10;
		t=t*10+y;
	}
	if(k==t)
		printf("\n%d palindrome",k);

  }
}
