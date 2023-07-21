#include<stdio.h>
#include<string.h>
int main(){
	
	int k=5, n, y, c, temp;
	char a[5];
	
	for(n=0; n<k; n++){
		scanf("%d", &a[n]);
	}
	
	for(y=1; y<k; y++){
		for(c=0; c<k-y; c++){
			if(a[c]>a[c+1]){
				temp=a[c];
				a[c]=a[c+1];
				a[c+1]=temp;
			}
		}	
	}
	
	for(n=0; n<k; n++){
		printf("\n%d", a[n]);
	}
}
