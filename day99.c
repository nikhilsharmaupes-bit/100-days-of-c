#include <stdio.h>

int main() {
    struct Student {
        char name[50];
        int roll;
        int marks;
    };
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter details for Student (Name Roll Marks): ");
    scanf("%s %d %d", student->name, &student->roll, &student->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", student->name, student->roll, student->marks);
    free(student);
    return 0;
}