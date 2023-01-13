#include<stdio.h>
struct Marks{
	
	int roll_no;
	char name;
	int chem_marks;
	int maths_marks;
	int phy_marks;
	
};
main(){
	
	int a,b,c,d,e;
	int percent;
	struct Marks j;
	
	j.roll_no;
	j.name;
	j.chem_marks;
	j.maths_marks;
	j.phy_marks;
	
	printf("Enter First Student Marks:");
	scanf("%d",&a);
	
	printf("Enter Second Student Marks:");
	scanf("%d",&b);
	
	printf("Enter Third Student Marks:");
	scanf("%d",&c);
	
	printf("Enter Fourth Student Marks:");
	scanf("%d",&d);
	
	printf("Enter Fifth Student Marks:");
	scanf("%d",&e);
	
	percent =(j.chem_marks+j.maths_marks+j.phy_marks)/3*100;
	
	printf("First Student % :%d",percent);
	
}
