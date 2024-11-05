#include <stdio.h>

int main() {
    float subject1, subject2, subject3;
    float average;
    char grade;


 printf("Enter marks in Subject 1 (out of 100): ");
    scanf("%f", &subject1);

    printf("Enter marks in Subject 2 (out of 100): ");
    scanf("%f", &subject2);

    printf("Enter marks in Subject 3 (out of 100): ");
    scanf("%f", &subject3);

    average = (subject1 + subject2 + subject3) / 3;

    if (average < 50) {
        grade = 'F';
        printf("Student fails.\n");
    } else {
        if (average >= 75) {
            grade = 'A';
        } else {
            grade = 'B';
        }
        printf("Student passes.\n");
    }

    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
