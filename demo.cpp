#include<stdio.h>
int main(){
	
int a[10], i,j,loc, y, n, temp, min;
		
printf("\n enter the no. of elements");
scanf("%d", &n);
printf("Enter the elements of sequence");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min = a[i];
		loc=i;
		
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min =a[j];
				loc=j;
			}
		}
		if(i!=loc)
		{
		temp=a[j];
		a[j]=a[loc];
		a[loc]=temp;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n\t%d",a[i]);
	}
	return 0;
	}
