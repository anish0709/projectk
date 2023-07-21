#include<stdio.h>
#include<string.h>
int main(){
	
	int n, y, c, temp;
	char a[50];
	for(n=0; n<5; n++)
	{
		scanf("%d", &a[n]);
	}
	for(y=0; y<n-1; y++)
	{
		for(c=y+1; c<n; c++){
			if(a[y]>a[c]){
				temp=a[y];
				a[y]=a[c];
				a[c]=temp;
			}
		}
	}
	
	for(n=0; n<5; n++){
		printf("%d\n", a[n]);
	}
}
