#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//practice 01
	int a;
	
	printf("Enter integer :");
	scanf("%d",&a);
	
	if(a>0)
		printf("positive\n");
		
	else
		printf("non-positive\n");
		
	
	//practice 02
	
	int input;
	
	printf("Enter integer : ");
	scanf("%d",&input);
	
	if(input>0)
		printf("|x|=%d\n",input);
		
	else
		printf("|x|=%d\n",-input); 
		
		
	//practice 03
	
	int b;
		
	printf("input a number : ");
	scanf("%d", &b);
	
	if(b>0)
	{
		printf("positive\n");
	}
	else if(b<0)
	{
		printf("non-positive\n");
	}
	else
	{
		printf("zero\n");
	
	}
	
	
	
		
	
	return 0;
}
