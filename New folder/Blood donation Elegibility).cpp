#include <stdio.h>

int main() {
    int age;
    float weight;

    printf("Enter your age::  ");
    scanf("%d", &age);

    printf("Enter your weight (in kilogram)::   ");
    scanf("%f", &weight);

    if (age >= 18 && age <= 65) {
        if (weight >= 50)
		 {
            printf("You are eligible to donate blood.\n");
        }
		 else 
		{
            printf("You are not eligible to donate blood due to low weight.\n");
        }
    } else 
	{
        printf("You are not eligible to donate blood due to age criteria.\n");
    }

    return 0;
}