#include <stdio.h>

// Define a structure for student
struct Student {
    char name[50];
    int rollNumber;
    float score;
};

// Function to display merit list
void displayMeritList(struct Student students[], int n) {
    printf("Merit List:\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Score");
    
    // Sort students based on score in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].score < students[j + 1].score) {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display the sorted list
    for (int i = 0; i < n; i++) {
        printf("%-20s %-15d %-10.2f\n", students[i].name, students[i].rollNumber, students[i].score);
    }
}

int main() {
    // Number of students
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of students
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Score: ");
        scanf("%f", &students[i].score);
    }

    // Display merit list
    displayMeritList(students, n);

    return 0;
}