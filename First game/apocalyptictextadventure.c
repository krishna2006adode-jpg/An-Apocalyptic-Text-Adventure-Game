#include <stdio.h>

int main() {
    int days_survived = 0;
    int health = 100;
    int choice;

    printf("=== THE OUTBREAK ===\n");
    printf("The alien syndicate has deployed the spore. You must survive.\n\n");

    // The main game loop continues as long as you are alive
    while (health > 0) {
        printf("--- Day %d ---\n", days_survived + 1);
        printf("Health: %d%%\n", health);
        printf("What is your move?\n");
        printf("1. Scavenge for supplies in the ruined city.\n");
        printf("2. Hide in the bunker and conserve energy.\n");
        printf("3. Surrender to the syndicate (Quit Game).\n");
        printf("Enter choice (1-3): ");
        
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nYou risk the city ruins. You found rations, but breathed in trace spores.\n\n");
            health -= 15; // Lose health from exposure
            days_survived++;
        } 
        else if (choice == 2) {
            printf("\nYou stay hidden. It is safe, but hunger weakens you.\n\n");
            health -= 5;  // Slow starvation
            days_survived++;
        }
        else if (choice == 3) {
            printf("\nYou step out with your hands up. The syndicate takes you.\n");
            break; // Exits the while loop immediately
        }
        else {
            printf("\nInvalid input. The panic clouds your judgment. Try again.\n\n");
        }
    }

    // The game ends here, either by death or surrendering
    if (health <= 0) {
        printf("\nYour health reached 0. The spores overtook you. You survived %d days.\n", days_survived);
    }

    return 0;
}