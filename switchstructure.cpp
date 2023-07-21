#include<stdio.h>
#include<process.h>
struct student
{
	char a[10];
	int b;
	int maths, hindi, english;
	int total;
	int percentage;
};

int main()
{
	int y=0;
	student s[5];
	int c;
	while(1){
	printf("1:INSERT\n2:DISPLAY\n3:EXIT\n");
	scanf("%d", &c);
	switch(c)
	{
	case 1 :
		{
		printf("Enter the Students detail : %d",y+1);
		printf("\nEnter the Name of the Student: ");
		fflush(stdin);
		gets(s[y].a);
		printf("Roll Number: ");
		scanf("%d", &s[y].b);
		printf("Enter 3 Subjects Number: ");
		scanf("%d", &s[y].maths);
		scanf("%d", &s[y].hindi);
		scanf("%d", &s[y].english);
		s[y].total = s[y].maths + s[y].hindi + s[y].english;
    	s[y].percentage = s[y].total/3;
    	y++;
    	break;
    }
	
	case 2 :
	for(int n=0;n<y;n++)
	{
		printf("%d\n", s[n].total);
    	printf("%d%\n", s[n].percentage);
	}
	break;
	case 3 :
	exit(0);
   }
 }
}
