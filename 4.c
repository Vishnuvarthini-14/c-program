#include <stdio.h>

int main() {
    int age;
    int price;

    printf("Enter your age: ");

    if (scanf("%d", &age) != 1) {
        printf("Invalid  input");
        return 1;
    }

    if (age < 0) {
        printf("Age cannot be negative");
        return 1;
    }

    if (age <= 12) {
        price = 100;
        printf("Category: Children\n");
    }
    else if (age <= 19) {
        price = 150;
        printf("Category: Teenager\n");
    }
    else if (age <= 60) {
        price = 200;
        printf("Category: Adult\n");
    }
    else {
        price = 120;
        printf("Category: Senior\n");
    }

    printf("Ticket Price: Rs.%d\n", price);

    return 0;
}