#include<stdio.h>
#include<conio.h>
int main(){
	int Units;
	printf("Enter your consumed Units::");
	scanf("%d", &Units);
	
	if(Units<=100){
		printf("No charge to pay....");
	}
		if(Units >=101 && Units<=200)
	{
		
		printf("charges:5 rupees per unit : Total charges:: %d", Units*5);
	}
		if(Units >= 201 && Units<=300)
	{
		printf("charges:8 rupees per unit : Total charges:: %d", Units*8);
	}
		if(Units>= 300)
	{
		
		printf("charges:10 rupees per unit : Total charges:: %d", Units*10);
	}
		
		
	}