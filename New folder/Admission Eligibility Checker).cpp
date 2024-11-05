#include<stdio.h>
#include<conio.h>
int main(){
	int Math,Science;
	printf("Enter Math marks::");
	scanf("%d",&Math);
	printf("Enter Science marks::");
	scanf("%d",&Science);
	
	float sum=Math+Science;
	float percentage = (sum/200)*100;
	if(percentage>=50)
	{
		printf("You are eligible for admission\n");
	
		if(percentage>=80)
		{
		
		printf(" And you are also qualify for scholarship");
		}
	}
		else
		{
			printf("You are not eligible for admission and scholaship");
		}
	}