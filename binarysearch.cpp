#include<stdio.h>
int main(){
	int a, b, c[10], n, k;
	printf("enter the no. of elements");
	scanf("%d", &n);
	for(b=1; b<=n; b++){
	scanf("%d", &c[b]);
	}	
	int l=0;
	int u=n-1;
	int mid = (l+u)/2;
	printf("enter the element to search");
	scanf("%d", &k);
	while(c[mid]!=k && l<=u){
		if(c[mid]>k)
		u=mid-1;
		else
		l=mid+1;
	}
	if(c[mid]==k)
	printf("found at %d", mid);
	else
	printf("not found");
}
