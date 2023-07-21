#include<stdio.h>
#include<string.h>
#include<process.h>
struct employee
{
	char name[10];
	int no;
	int dept;
	int salary;
};

int main(){
	employee s[5];
	int c,i;
		int n, loc, y=0;
	while(1){
		printf("\n1.insert employee \n2.search \n3.all employee \n4.delete employee \n5.update employee\n6.Exit\n");
	
		scanf("%d", &n);
		switch(n){
			
			case 1:
				printf("Enter the details of employee no. %d",y+1);
				printf("\nEnter the Name of the employee: ");
				fflush(stdin);
				gets(s[y].name);
				printf("employee Number: ");
				scanf("%d", &s[y].no);
				printf("department number: ");
				scanf("%d", &s[y].dept);
				printf("salary: ");
				scanf("%d", &s[y].salary);
    			y++;
    			break;
    	
			case 2:
				printf("search");
				printf("enter no.");
				scanf("%d", &c);
				for(int b=0; b<y; b++)
				{
					if(s[b].no==c)
					{
						puts(s[b].name);
						printf("%d\n", s[b].no);
						printf("%d\n", s[b].dept);
						printf("%d\n", s[b].salary);
					}
				}
				break;
				
			case 3:
				for(int k=0; k<y; k++)
				{
						printf("\n\t\t%d\t%s\t%d\t%d", s[k].no,s[k].name,s[k].dept,s[k].salary);
				}
				break;
				
			case 4:
				printf("delete employee");
				printf("Enter the emplyoye no : ");
				scanf("%d",&loc);

				for( i=0;i<y;i++)
				{
					if(s[i].no==loc)
					{
						break;
					}
				}
				if(i!=y)
				{				
						for(int g=i;g<y;g++)
						{
						s[g]=s[g+1];
						}	
				y--;	
				}
				
				break;
				
			case 5:
				printf("update employee");
				printf("Enter the emplyoye no : ");
				scanf("%d",&loc);

				for(int i=0;i<y;i++)
				{
					if(loc==s[i].no)
					{
				printf("\nEnter the Name of the employee: ");
				fflush(stdin);
				gets(s[i].name);
				printf("employee Number: ");
				scanf("%d", &s[i].no);
				printf("department number: ");
				scanf("%d", &s[i].dept);
				printf("salary: ");
				scanf("%d", &s[i].salary);		
					}	
				}
				break;
			case 6:
				exit(0);
		}
	}
}
