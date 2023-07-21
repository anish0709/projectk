#include<stdio.h>
int main(){
	int a[10], b[10], c[10], n1, n2, i, j, k, y;
	for(i=0; i<n1; i++)
	{
		scanf("%d", &a[n1]);
	}
	
	for(j=0; j<n2; j++)
	{
		scanf("%d", &b[n2]);
	}
	
		i=j=k=0;
	
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	
	if(i<n1)
	{
		while(i<n1)
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
		
	else
		{
			while(j<n2)
			{
				c[k]=b[j];
				j++;
				k++;
			}
		}
	
	for(y=0; y<k; y++)
	{
		printf("%d", c[y]);
	}
	
return 0;
}	
