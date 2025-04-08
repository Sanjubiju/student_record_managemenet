#include "struct.h"

#define MAX_PASSWORD_LENGTH 50

int loginUser() {
    struct User user, storedUser;
    FILE *file = fopen("users.txt", "r");

    if (!file) {
        printf("No user database found. Please register first.\n");
        return 0;
    }

    printf("Enter username: ");
    scanf("%s", user.username);

    // Hide password input
    printf("Enter password: ");
    int i = 0;
    while (1) {
        char ch = _getch();  // Read one character without echoing
        if (ch == '\r') {  // Enter key is pressed
            break;
        }
        if (ch == '\b' && i > 0) {  // Backspace handling
            i--;
            printf("\b \b");  // Erase * on screen
        } else if (ch != '\b' && i < MAX_PASSWORD_LENGTH - 1) {
            user.password[i++] = ch;
            printf("*");  // Show '*' for each character
        }
    }
    user.password[i] = '\0';  // Null terminate the password string

    while (fscanf(file, "%s %s", storedUser.username, storedUser.password) != EOF) {
        if (strcmp(user.username, storedUser.username) == 0 && strcmp(user.password, storedUser.password) == 0) {
            printf("\nLogin successful! \n\n\nWelcome: %s\n\n\n\n\n", user.username);
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    printf("\nInvalid username or password.\n");
    return 0;
}