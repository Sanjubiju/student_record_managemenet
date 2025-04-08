#include <stdio.h>
#include "struct.h"

void studentrecordmenu()
{
   int taskToPerform;
   while (1)
   {
      printf("1. Add a new Student Detail\n");
      printf("2. Find the details of a Student using Roll Number\n");
      printf("3. Find the details of a Student using the First Name\n");
      printf("4. Find Total number of Students\n");
      printf("5. Delete the details of an Student\n");
      printf("6. Update the details of an Student\n");
      printf("7. Show the Students Details\n");
      printf("8. Logout\n");
      printf("Enter the task that you want to perform:");
      scanf("%d", &taskToPerform);

      switch (taskToPerform)
      {
      case 1:
         addStudent();
         break;
      case 2:
         findByRollNumber();
         break;
      case 3:
         findByName();
         break;
      case 4:
         totalCount();
         break;
      case 5:
         deleteStudent();
         break;
      case 6:
         updateStudent();
         break;
      case 7:
         studentrecord();
         break;
      case 8:
         printf("Logging Out......\n\n");
         return; //Going back to the login page
      default:
         printf("Invalid option! Try again.\n");
      }
   }
}
