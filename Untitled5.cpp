#include<stdio.h>
#include<string.h>
int main(){
	char a[10], b[10];
	int count=0, flag=0, answer, c=0;
	
	gets(a);
	gets(b);
	
	for(int y=0; a[y]!=NULL; y++){
		count++;
	}
	for(int n=0; b[n]!=NULL; n++){
		flag++;
	}
	
	answer=count>flag?count:flag;
	
	for(int k=0; k<answer; k++){
		if(a[k]==b[k])
		c++;
		else
		continue;
	}
	if(c==answer)
	printf("Both are equal");
	else
	printf("Both are not equal");
}
