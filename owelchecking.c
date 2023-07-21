#include<stdio.h>
int main()
{
    char  n;
    printf("Enter any character : ");
    scanf("%c", &n);
    n=tolower(n);
    
    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
    	printf("found");
	
	else
	printf("not found");
}
