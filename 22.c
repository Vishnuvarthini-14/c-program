#include <stdio.h>

int main() {
    int choice, qty;
    float total;

    printf("1.Dairy Milk - 50\n2.KitKat - 30\n3.Snickers - 40\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    switch(choice) {
        case 1: total = 50 * qty; break;
        case 2: total = 30 * qty; break;
        case 3: total = 40 * qty; break;
        default: printf("Invalid choice"); return 0;
    }

    printf("Total amount = %.2f", total);
    return 0;
}