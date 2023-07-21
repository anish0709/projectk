#include<stdio.h>
int main(){
    char a, e, i, o, u, n;
    printf("Enter any character : ");
    scanf("%c", &n);
    
    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
    	printf("found");
	}
	
	else
	printf("not found");
}
