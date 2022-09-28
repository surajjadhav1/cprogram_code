
#include<stdio.h>
struct student
{
	int rollno;
	char grade;
	float percentage;
}std;

int main()
{
  //struct student std;
  printf("\n Enter student roll no : \n");
  scanf("%d \n",&std.rollno);

  printf("\n Enter student grade : \n");
  scanf("%c\n",&std.grade);

  printf("\n Enter student percentage : \n");
  scanf("%f",&std.percentage);

printf("\n display student info");
printf("\n Roll No= %d",std.rollno);
printf("\n grade= %c",std.grade);
printf("\n percentage= %f",std.percentage);


  return 0;
}
