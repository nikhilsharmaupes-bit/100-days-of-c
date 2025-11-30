#include <stdio.h>

int main() {
    struct Student {
        char name[50];
        int roll;
        int marks;
    };
    struct Student student;
    struct Student *ptr = &student;
    printf("Enter details for Student (Name Roll Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}