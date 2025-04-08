#include "struct.h"
// Function to delete a Student


void deleteStudent()
{
    FILE *file,*file1;
   int temp=0,found;
   printf("Delete student\n\n\n");
   file = fopen("student_info.txt", "r");//existing file
   file1 = fopen("temp_info.txt", "w");//open a temp_info file  
   printf("Enter the roll number of the student\n");
   scanf("%d", &temp);//finding by roll number 
  while(fread(&st,sizeof(struct studentInfo),1,file))
  {
     if (st[i].rollNumber == temp) // condition to check the temp is equal to roll number 
     {
       found=1;
     }
     else{

        fwrite(&st,sizeof(struct studentInfo),1,file1);    
     }
  }
     fclose(file);
     fclose(file1);
     if(found)
     {
        remove("student_info.txt");
        rename("temp_info.txt","student_info.txt");
        printf("\tRecord Deleted Successfully!!!\n\n\n\n");
     }
     if(!found)
     {
        printf("\tRecord Not Found");
     }
}
