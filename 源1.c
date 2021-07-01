#include<stdio.h>

int main()
{
	struct stud 
	{
		char name[20];
		int age;
		char id[20];
		float score;
	};
	int a = 0;
	char b = 45;
	b=(float)b;
	printf("%d\n", b);
	struct stud s1 = { "ÕÅÈı",23,"230622",122.8};
	struct stud *ps = &s1;
	//printf("%1.s\n", s1.name);
	//printf("%10.d\n", s1.age);
	//printf("%.s\n", s1.id);
	//printf("%-20.1f", s1.score);
	//printf("%5.1f", s1.score);
	printf("%d\n", ps->age);
	char c = 3;
	printf("%d",c);
	return 0;
}