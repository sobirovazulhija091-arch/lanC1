
#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    char major[50];
} Student;

int main(void)
{
    Student students[] = {
        {108, "Kamol", "Physics"},
        {103, "Madina", "Economics"},
        {105, "Zebo", "Computer Science"},
        {101, "Amina", "Computer Science"},
        {107, "Nilufar", "Biology"},
    };

    int student_count = sizeof students / sizeof students[0];

    for (int i = 0; i < student_count - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < student_count; j++)
        {
            if (students[j].id < students[min_index].id)
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            Student temp = students[i];
            students[i] = students[min_index];
            students[min_index] = temp;
        }
    }
    printf("Sorted directory:\n");

    for (int i = 0; i < student_count; i++)
    {
        printf("%d - %s\n", students[i].id, students[i].name);
    }

    int target;
    printf("\nStudent ID: ");
    scanf("%d", &target);
    int low = 0;
    int high = student_count - 1;
    int found = -1;
    int comparisons = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        comparisons++;

        if (students[mid].id == target)
        {
            found = mid;
            break;
        }
        else if (students[mid].id < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found != -1)
    {
        printf("Name: %s\n", students[found].name);
        printf("Major: %s\n", students[found].major);
    }
    else
    {
        printf("Student not found.\n");
    }

    printf("Comparisons: %d\n", comparisons);

    return 0;
}
