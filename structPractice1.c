#include <stdio.h>
#include <string.h>

struct studentGrades {
    char name[30];
    char letterGrade;
    int percentage;
};

int main(){
    struct studentGrades s1;
    strcpy(s1.name, "Alan Tran");
    s1.letterGrade = 'A';
    s1.percentage = 93;

    struct studentGrades s2 = {"Spin", 'B', 86};
    struct studentGrades s3 = {"Bin", 'C', 73};

    printf("Name: %s\n Letter grade: %c\n Grade percentage: %i\n", s1.name, s1.letterGrade, s1.percentage);
    printf("Name: %s\n Letter grade: %c\n Grade percentage: %i\n", s2.name, s2.letterGrade, s2.percentage);
    printf("Name: %s\n Letter grade: %c\n Grade percentage: %i\n", s3.name, s3.letterGrade, s3.percentage);
}