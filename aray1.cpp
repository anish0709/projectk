#include<stdio.h>
#include<process.h>
int main(){
	
	int a[10], n, k, c;
	scanf("%d",&n);
	
	for(int y=0; y<n; y++){
		scanf("%d", &a[y]);
	}
	
	scanf("%d", &c);
	
	for(int y=0; y<n; y++){
	if(a[y]==c){
	printf("Element found");
	printf("New element :");
	scanf("%d", &k);
	a[y]=k;
	exit(0);
      }
    }
    
    if(a[y]!=c)
    printf("Not found");
    
    for(int y=0; y<n; y++){
		printf("%d", a[y]);
	}
}
