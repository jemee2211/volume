#include<stdio.h>
struct first{
	
	int a;
	int b;
	int c;
	int d;
	
	
};
main(){
	
	
	struct first l;
	
	l.a;
	l.b;
	l.c;
	l.d;
	int p;
	int q;
	
	printf("Enter first value in Inch:");
	scanf("%d",&l.a);
	
	printf("Enter second value in Inch:");
	scanf("%d",&l.b);
	
	p = l.a + l.b;
	printf("%d",p);
	
	printf("\nEnter first value in Feet:");
	scanf("%d",&l.c);
	
	printf("Enter second value in Feet:");
	scanf("%d",&l.d);
	
	
	q = l.c + l.d;
	printf("%d",q);
	
	
}
