#include<stdio.h>
#include<string.h>
int main(){
	int n, a[10], b[5], c[5], g=0, k=0;
	scanf("%d",&n);
	for(int y=0; y<n; y++)
	{
		scanf("%d", &a[y]);
	}
	
	for(int y=0; y<n; y++)
	{
		if(a[y]%2==0)
		{
			b[k]=a[y];
			k++;
		}
		else
		{
			c[g]=a[y];
			g++;
		}
	}
	printf("\nEven Elements are ");
	for(int i=0; i<n/2; g++)
	{
		printf("%d", c[g]);
	}
  }
}
