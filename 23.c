#include <stdio.h>

int main() {
    float mass, velocity, energy;

    printf("Enter mass: ");
    scanf("%f", &mass);

    printf("Enter velocity: ");
    scanf("%f", &velocity);

    energy = 0.5 * mass * velocity * velocity;

    printf("Kinetic Energy = %.2f", energy);

    return 0;
}