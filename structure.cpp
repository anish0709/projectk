#include<stdio.h>

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
	student s[5];
	for(int y=0; y<5; y++)
	{
		
		printf("Enter the details of the student %d: ", y+1);
		gets(s[y].a);
		scanf("%d", &s[y].b);
		scanf("%d", &s[y].maths);
		scanf("%d", &s[y].hindi);
		scanf("%d", &s[y].english);
		fflush(stdin);
		s[y].total = s[y].maths + s[y].hindi + s[y].english;
    	s[y].percentage = s[y].total/3;
	
	}
	
	for(int y=0;y<5;y++)
	{   
	    puts(s[y].a);
		printf("%d\n", s[y].total);
    	printf("%d\n%", s[y].percentage);
	}
}                                                                                                           
