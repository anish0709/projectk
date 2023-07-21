#include<stdio.h>
int main(){
	
	int a[5], j, k, loc, y, n, temp, min;
		
		printf("\n enter the no. of elements");
		scanf("%d", &n);
		printf("Enter the elements of sequence");
	
	for(j=0; j<n; j++)
	{
		scanf("%d", &a[j]);
	}
	
	for(y=0; y<n-1; y++)
	{
		loc=y;
		min=a[y];
		
		for(k=y+1; k<n; k++)
		{
			if(min>a[k])
			{
				min=a[k];
				loc=k;
			}
		}
		if(y!=loc)
		{	
			temp=a[y];		//temp=a[k];
			a[y]=a[k];		//a[k]=a[y];
			a[k]=temp;		//a[y]=temp;
		}	
	}
	
	printf("the elements of sequence are sorted is");
	for(j=0; j<n; j++)
	{
		printf("%d\n", a[j]);
	}
}
