#include <stdio.h>

int main () {
    int number;
    int servicing = 0;

    printf("Enter a highway number: \n");

    scanf("%d", &number);

    if (number < 100 && number > 0) {
        // is primary
        if (number %  2 == 0) {
            // check if east/west
            printf("I-%d is primary, going east/west.\n", number);
        } else {
            printf("I-%d is primary, going north/south.\n", number);
        }
    }
    else if (number >= 100 && number <= 999) {
        // is auxilary 
        servicing = number % 100;
        if (number %  100 == 0) {
            // is a hundred value
            printf("%d is not a valid interstate highway number.\n", number);
        } else if (number %  100 != 0 && number % 2 == 0) {
            printf("I-%d is auxiliary, serving I-%d, going east/west.\n", number, servicing);
        } else {
            printf("I-%d is auxiliary, serving I-%d, going north/south.\n", number, servicing);
        }
    } else {
       printf("%d is not a valid interstate highway number.\n", number);
    }
}