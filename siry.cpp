#include<stdio.h>
#include<string.h>
int main(){
	char a[10][20];
	for(int y=0; y<10; y++){
		gets(a[y]);
	}
	for(int y=0; y<10; y++){
		puts(a[y]);
	}
}
