#include<stdio.h>
#include<process.h>
int main(){
	
	int a[10], n, y, k=0;
	while(1){
	printf("1.push \n2.display \n3.top element \n4.remove from top \n5.exit\n");
	scanf("%d", &n);
	switch(n){
		case 1:
			scanf("%d", &a[k]);
			k++;
		    break;
		
		case 2:
		for(y=0; y<k; y++){
			printf("%d\n", a[y]);
		}
		    break;
		
		case 3:
		printf("%d\n", a[k-1]);
		    break;
		
		case 4:
		   printf("%d removed from top\n", a[k-1]);
			k--;      
		    break;
		
		case 5:
			exit(0);
			break;
      }
   }
}
