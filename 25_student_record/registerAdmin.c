

#include "struct.h"


// Function to register a user
#define MAX_USERS 2  // Set the registration limit
int countUsers() 
    {
        FILE *file = fopen("users.txt", "r");
        if (!file) return 0;  // No users registered yet
    
        int count = 0;
        struct User tempUser;
        
        while (fscanf(file, "%s %s", tempUser.username, tempUser.password) != EOF) {
            count++;
        }
    
        fclose(file);
        return count;
    }
    
    // Function to register a new user with a limit
    void registerAdmin() {
        if (countUsers() >= MAX_USERS) {
            printf("User registration limit reached (%d users). Cannot register more users.\n\n\n", MAX_USERS);
            return;
        }
    
        struct User user;
        FILE *file = fopen("users.txt", "a"); // Open file in append mode
        if (!file) {
            printf("Error opening file!\n");
            return;
        }
    
        printf("Enter username: ");
        scanf("%s", user.username);
        printf("\nEnter password: ");
        scanf("%s", user.password);
    
        fprintf(file, "%s %s\n", user.username, user.password); // Save credentials to file
        fclose(file);
    
        printf("User registered successfully!\n\n");
    }
    
    