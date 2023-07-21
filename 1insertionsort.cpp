#include<stdio.h>
int main(){
	int a[5], i, j, k, n, cur;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(j=0; j<n-1; j++)
	{
		cur=a[j];
		for(k=j-1; a[k]>cur && k>=0; k--)
		{
			a[k+1]=a[k];
		}
	}
	
	for(k=0; k<n; k++)
	{
		printf("%d\n", a[k]);
	}
	
}
