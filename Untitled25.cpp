-#include<stdio.h>

int main()
{
	int i,n;
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		printf("\n%d",(i*i)-1);
	
return 0;
}
