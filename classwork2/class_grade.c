
#include <stdio.h>

typedef struct
{
    char name[50];
    int score;
} Student;

int main(void)
{
    Student students[10];
    int student_count;
    do
    {
        printf("Number of students: ");
        scanf("%d", &student_count);

        if (student_count < 3 || student_count > 10)
        {
            printf("Please enter a number between 3 and 10.\n");
        }
    } while (student_count < 3 || student_count > 10);

    int total = 0;

    for (int i = 0; i < student_count; i++)
    {
        printf("Student %d name: ", i + 1);
        scanf("%49s", students[i].name);

        do
        {
            printf("%s's score: ", students[i].name);
            scanf("%d", &students[i].score);

            if (students[i].score < 0 || students[i].score > 100)
            {
                printf("Invalid score. Enter a score from 0 to 100.\n");
            }
        } while (students[i].score < 0 || students[i].score > 100);

        total += students[i].score;
    }

    double average = (double) total / student_count;

    int highest = 0;

    for (int i = 1; i < student_count; i++)
    {
        if (students[i].score > students[highest].score)
        {
            highest = i;
        }
    }

    char top_name[50];
    int top_score = students[highest].score;

    for (int i = 0; i < 50; i++)
    {
        top_name[i] = students[highest].name[i];
        if (top_name[i] == '\0')
        {
            break;
        }
    }

    for (int i = 0; i < student_count - 1; i++)
    {
        int largest = i;

        for (int j = i + 1; j < student_count; j++)
        {
            if (students[j].score > students[largest].score)
            {
                largest = j;
            }
        }

        if (largest != i)
        {
            Student temporary = students[i];
            students[i] = students[largest];
            students[largest] = temporary;
        }
    }

    printf("\nAverage: %.2f\n", average);
    printf("Top student: %s (%d)\n", top_name, top_score);

    printf("\nRanking:\n");

    for (int i = 0; i < student_count; i++)
    {
        printf("%d. %s - %d\n",
               i + 1, students[i].name, students[i].score);
    }

    return 0;
}
