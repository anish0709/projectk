#include<stdio.h>
#include<string.h>
int main(){
	
	int k, b, c, y;
	char a[10][20]; 
	char k[10][20];
	for(y=0; y<10; y++){
		gets(a[y]);
	}
	
	for(b=0; b<10; b++){
		for(c=b+1; c<10; c++){
			if(a[b]>a[c]){
				k[b]=a[b];
				a[b]=a[c];
				a[c]=k[b];
			}
		}
	}
	
	for(y=0; y<10; y++){
		puts(k[y]);
	}
}
