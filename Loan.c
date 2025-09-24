/*
Name: Wangalwa Alvin
Registration NO.: PA106/G/28804/25
Description : Loan
*/
#include <stdio.h>

// main function
int main() {
	//declaration
    int age;
	float income;

    // Input details
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (Ksh): ");
    scanf("%f", &income);

    //Conditions
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
