// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main()
{
   
    FILE *file = fopen("students.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }   
    fprintf(file, "Asha %d %d\n", 101, 85);
    fprintf(file, "Ravi %d %d\n", 102, 92);
    fclose(file);
    file = fopen("students.txt", "r");  
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    char name[50];
    int roll, marks;
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }   
    fclose(file);
                                
    return 0;
}