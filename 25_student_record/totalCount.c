#include "struct.h"
//Function to print the total number of students
void totalCount()
{
   FILE *file;
   char line[200];

   int studentCount = 0;

   file = fopen("student_info.txt", "r");  // Open file for reading
      if (file == NULL) {
         printf("Could not open file.\n");
         return ;
      }

// Read each line from the file until end of file
      while (fgets(line, sizeof(line), file)) {
         studentCount++;  // Increment the count for each line (each student)
      }

   fclose(file);

// Print the total number of students
   printf("Total number of students: %d\n\n", studentCount);
}


