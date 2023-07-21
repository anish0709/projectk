#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100], temp;
	int len, n=0, j, k;
	printf("Enter the string which you want to reverse : ");
	gets(str);
	len=strlen(str);
	
	for(j<0; j<len; j++){
		if((str[j]==32) || (j==len-1)){
			if(j<len-1)
			k=j-1;
			else
			k=j;
		}
	}
	
	while(n<k){
		temp=str[n];
		str[n]=str[k];
		str[k]=temp;
		n++;
		k--;
	}
	
	n=j+1;
	puts(str);
	return 0;
}
