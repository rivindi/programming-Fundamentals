#include<stdio.h>

void calculation (int x, int y, char z)
{
int r;

switch(z){
	
	case '+':
		r=x+y;
		printf("%d",r);
	break;
	
	case '-':
		r=x-y;
		printf("%d",r);
	break;
	
	case '*':
		r=x*y;
		printf("%d",r);
	break;	
	
	default:print("invalid");
}	


}

int main (void)
{
	int a,b;
	char c;
	
	printf("Enter a num 1= ");
	scanf("%d", & a);
	
	printf("Enter a num 2= ");
	scanf("%d", & b);
	
	printf("Enter a oparation= ");
	scanf("%s", & c);
	
	calculation (a,b,c);
		
	return 0;
}
