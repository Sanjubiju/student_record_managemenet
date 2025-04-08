#include "struct.h"

int i =0,j;
struct studentInfo st[500];
void addStudent()
{
    char another;
    FILE *file;
    do
    {
    
   printf("Add the Student's Details\n\n");
   file=fopen("student_info.txt","a");//File open
   printf("Enter the first name of the student: ");
   scanf("%s", st[i].firstName);
   printf("Enter the last name of the student: ");
   scanf("%s", st[i].lastName);
   printf("Enter the roll number of the student: ");
   scanf("%d", &st[i].rollNumber);
   printf("Enter the grade of the student: ");
   scanf("%f", &st[i].CGPA);//Enter the details like name,roll number and grade

    if(file == NULL)
    {
        fprintf(stderr,"\tCan't Open File\n");
    }
    else
    {
        printf("\tRecord stored successfully\n");
    }
    fwrite(&st,sizeof(struct studentInfo),1,file);//details write to the file
    fclose(file);

    printf("\n\nDo yopu want to add another record?(y/n) : ");
    scanf("%s",&another);
    }
    while (another == 'y' || another == 'Y');

}