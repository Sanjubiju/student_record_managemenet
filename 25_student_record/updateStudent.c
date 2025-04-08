#include "struct.h"

// Function to update a student's data
void updateStudent()
{
   FILE *file,*file2;

   int rollNumber,found;
   file = fopen("student_info.txt", "r");
   printf("Enter the roll number of the student\n");
   scanf("%d", &rollNumber);
   file2 = fopen("temp_student_info.txt","w");
      if(file2 == NULL)
      {
         printf("Could Not Open a temporary file");
         fclose(file);
         return;
      }
   while(fread(&st,sizeof(struct studentInfo),1,file))
   {
      if (st[i].rollNumber == rollNumber)
      {
         found =1;
      // if (temp == st[j].rollNumber)
         printf("1. First Name\n"
                "2. Last Name\n"
                "3. Roll Number\n"
                "4. Grade\n");
         int c;
         scanf("%d", &c);
         switch(c) {
            case 1:
               printf("Enter the updated first name : ");
               scanf("%s", st[i].firstName);
               break;
            case 2:
               printf("Enter the updated last name : ");
               scanf("%s", st[i].lastName);
               break;
            case 3:
               printf("Enter the updated roll number : ");
               scanf("%d", st[i].rollNumber);
               break;
            case 4:
               printf("Enter the updated Grade : ");
               scanf("%f", st[i].CGPA);
               break;
            default:
               printf("Invalid!!!!!\n");
               break;
         
            }
         printf("Records updated successfully\n\n");
      }
      fwrite(&st,sizeof(struct studentInfo),1,file2);
   }
   if(!found)
   {
      printf("Student Not Found \n");
   }
   fclose(file);
   fclose(file2);

   remove("student_info.txt");
   rename("temp_student_info.txt","student_info.txt");

   printf("File Updated Successfully......");

}
