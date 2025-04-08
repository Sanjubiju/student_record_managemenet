#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

// To keep track of the number of students
//int i = 0;
extern int i;

// A structure to store the student details
struct User {
   char username[50];
   char password[50];
};
struct studentInfo
{
   char firstName[20];
   char lastName[20];
   int rollNumber;
   float CGPA;
   int courseId[10];
};
//st[500];
#define MAX_STUDENTS 500 
extern struct studentInfo st[MAX_STUDENTS]; 


void addStudent();
void findByRollNumber();
void findByName();
void totalCount();
void deleteStudent();
void updateStudent();
void studentrecord();
int loginUser();
void registerAdmin();
void studentrecordmenu();
#endif