#include<stdio.h>
#include<process.h>
int main(){
	
	int loc=0, j, a[10], n, k, c;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the element which you want to replace:");
	scanf("%d", &k);
	for(j=0; j<n; j++){
		if(a[j]==k){
		loc=j;
		break;
	}
}
	if(j==n){
	printf("element not found");
	exit(0);
	}
	else{
    printf("Enter the element which you want to replace with:");
    scanf("%d", &c);
	
	for(int g=n; g>=loc; g--){
		a[g+1]=a[g];
	    } 
	    a[loc]=c;
	
	for(int y=0; y<=n; y++){
		printf("%d\n", a[y]);
	}
  }
}
//204487684753
