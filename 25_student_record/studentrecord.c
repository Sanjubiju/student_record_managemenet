#include "struct.h"

// int i =0,j;
// struct studentInfo st[500];

void studentrecord()
{
 
    FILE *file;
    file=fopen("student_info.txt","r");

    printf("****Student Records*********\n\n");

    if(file==NULL)
    {
        fprintf(stderr,"Cant Open\n");    
    }
    else
    {
        printf("\t\tRecords\n");
        printf("\t\t-------\n");
    }
    while(fread(&st,sizeof(struct studentInfo),1,file))
    {
        printf("Student name        :%s %s\n",st[i].firstName,st[i].lastName);
        printf("Roll number         :%d\n",st[i].rollNumber);
        printf("Grade                :%.2f\n",st[i].CGPA);
        // printf("Course ID           :%d\n\n",st[i].courseId);
    }
    fclose(file);

}