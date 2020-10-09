#include <stdio.h>

unsigned long long factorial(int number) {
    if(number == 0) {
        return 1;
    }
    return number * factorial(number - 1);
}

int main() {
    int number;
    printf("Enter a number between the range of 0 to 20:-\n");
    scanf("%d", &number);
	
    if (number < 0) {
        printf("Invalid Input. The entered number cannot be negative.\n");
    } else if (number > 20) {
        printf("Invalid Input. The entered number cannot exceed 20. As 20! is lasrgest factorial result that \"unsigned long long\" data type can store.");
    } else {
        printf("%lld \n", factorial(number));
    }

    return 0;
}