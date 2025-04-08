#include "struct.h"


// Function to find the student by the first name
void findByName()
{
    char temp[20];
    FILE *file;
    file = fopen("student_info.txt", "r");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return;
    }

    printf("Enter the First Name of the Student: ");
    scanf("%s", temp);

    int found = 0;

    // Read the data from the file into the st array
    int i = 0;
    while (fread(&st[i], sizeof(struct studentInfo), 1, file)) {
        i++;
        if (i >= MAX_STUDENTS) {
            printf("Maximum number of students reached.\n");
            break;
        }
    }

    // Now search for the student by their first name
    for (int j = 0; j < i; j++) {
        if (strcmp(st[j].firstName, temp) == 0) 
        {  
            printf("The student's details are:\n");
            printf("The first name is %s\n", st[j].firstName);
            printf("The last name is %s\n", st[j].lastName);
            printf("The Grade is %.2f\n", st[j].CGPA);
            goto back;
         }
      }
         printf("\tRecord Not Found\n\n");
         printf("------------------------\n");
  
back:
    fclose(file);

}