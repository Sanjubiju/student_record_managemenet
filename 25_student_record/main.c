#include "struct.h"

int main() {
    int choice;

    while (1) {
        printf("\n---- User Authentication ----\n");
        printf("1. Register\n2. Login\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerAdmin();
                break;
            case 2:
                if (loginUser()) {  // Only proceed if login is successful
                    studentrecordmenu();
                }
                break;
            case 3:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}