#include<stdio.h>
#include<string.h>
int main(){
	
	char a[10], c[10], flag[10];
	int b, y, count=0;
	
	gets(a);
	
	for(b=0; a[b]!=NULL; b++){
		count++;
	}
	printf("%d", count);
	
	gets(c);
	for(y=0; c[y]!=NULL; y++){
		if(c[y]>=97 && c[y]<=123)
			c[y]=c[y]-32;
		else
		    c[y]=c[y]+32;
		}
		
	for(y=0; c[y]!=NULL; y++){
	    printf("%c", c[y]);
	}
	
}	
