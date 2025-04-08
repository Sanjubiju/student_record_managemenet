#include "struct.h"

/* Function to find the students using roll number*/
void findByRollNumber()
{
    int rollNumber,found=0;
    FILE *file;
    file=fopen("student_info.txt","r");
    printf("\t\tSearch Student\n\n");
    printf("Enter the roll number of the student\n");
    scanf("%d", &rollNumber);

   while(fread(&st,sizeof(struct studentInfo),1,file))
   {
      if (st[i].rollNumber == rollNumber)
      {
        found=1;
        printf("Student name        :%s %s\n",st[i].firstName,st[i].lastName);
        printf("Roll number         :%d\n",st[i].rollNumber);
        printf("Grade                :%.2f\n",st[i].CGPA);
        // printf("Course ID           :%d\n",st[i].courseId);
      }
      }
      if(!found)
      {
        printf("\tRecord Not Found\n\n");
        

      }
      fclose(file);
      
}
