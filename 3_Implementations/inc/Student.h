#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>

#define Student struct Stud

void add(FILE * fp);
void modify(FILE * fp);
void display(FILE * fp);
void Indivisual(FILE *fp);
void password();
FILE * del(FILE * fp);
void printChar(char ch,int n);
void title();
FILE *tp;


struct pass
{
	char pass[25];
}pa;

struct Stud
{
    char name[100];
    char dept[50];
    int roll;
    float sgpa[12];
    float cgpa;
};


#endif // STUDENT_H_INCLUDED
