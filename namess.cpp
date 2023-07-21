#include<stdio.h>
#include<string.h>
int main(){
	char a[10][20],s[20];
	int k, y, n;
	for(int y=0; y<10; y++){
		gets(a[y]);
	}
	for(int y=0; y<10; y++){
		puts(a[y]);
	}
	for(int y=0; y<10; y++){
		for(k=0; k<10-y-1; k++){
	    n=strcmp(a[k], a[k+1]);
		if(n>0)
		{
			strcpy(s,a[k]);
			strcpy(a[k],a[k+1]);
			strcpy(a[k+1],s);
		}
	}
 }
for(int y=0; y<10; y++){
		puts(a[y]);
	}
}

