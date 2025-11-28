#include<stdio.h>
#include<conio.h>

int main(void)
{
	int num[10]={3,2,4,5,6,4,9,7,8,1};
	int a;
	int set;
	printf("Enter a number u like ; \n");
	scanf("%d", &a);
	
	int b;
	for(b=0;b<10;b++)
	{
		if ( num[b]==a){
			 set=1;
		printf("location is = %d \n",b);
		
		}
		
	}
	
	if (set==0)
		printf("Number is not found");
	
	getch;
	return 0;
	
}
