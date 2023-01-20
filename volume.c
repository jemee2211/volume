#include<stdio.h>

struct Marks{
	
	int roll_no;
	char name;
	int chem_marks;
	int maths_marks;
	int phy_marks;
	
};
main(){
	int i;
	struct Marks j;
	float percent;
	
	j.roll_no;
	j.name;
	j.chem_marks;
	j.maths_marks;
	j.phy_marks;
	
	for(i=0; i<5; i++){
		
	printf("Enter Student Roll No.:");
	scanf("%d",&j.roll_no);
	
	printf("Enter Student Name:");
	scanf("%s",&j.name);

	printf("Enter Student chem marks:");
	scanf("%d",&j.chem_marks);
	
	printf("Enter Student Maths Marks:");
	scanf("%d",&j.maths_marks);
	
	printf("Enter Student Phy Marks:");
	scanf("%d",&j.phy_marks);
	
	
	percent =(j.chem_marks+j.maths_marks+j.phy_marks)*100/300;
	
	printf("Percentage of Student  :%f\n\n",percent);
}
	
}
