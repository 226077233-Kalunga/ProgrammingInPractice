#include <stdio.h>

int main() {
    /////Section A //////
    ////declare variable////
    double salaries[50];
    double allSalaries = 0;
    double average =0;
    double highest =0;
    double lowest =0;
    double searchValue;
    int found = 0;
    double average =0;

    /////// Capture 50 salaries/////
    printf("Enter 50 employee salaries:\n");
    for (int i = 0; i < 50; i++) {
        printf("Salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
        allSalaries += salaries[i];
    }

    //////// Display all salaries//////
    printf("\nAll Salaries\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d %.2f\n", i + 1, salaries[i]);
    }

    
    ///////Calculate average///////
    

    average = allSalaries / 50;
    printf("\nAverage Salary %.2f\n", average);

    ///////Find highest and lowest/////
    highest = salaries[0];
    lowest = salaries[0];
    for (int i = 1; i < 50; i++) {
        if (salaries[i] > highest) {
            highest = salaries[i];
        }
        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }
    printf("Highest Salary %.2f\n", highest);
    printf("Lowest Salary %.2f\n", lowest);

    // Search for a particular salary
    printf("\nEnter a salary to search: ");
    scanf("%f", &searchValue);

    for (int i = 0; i < 50; i++) {
        if (salaries[i] == searchValue) {
            printf("Salary %.2f found at Employee %d\n", searchValue, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Salary %.2f not found.\n", searchValue);
    }

}

//////////
//////////
/////////
/////////
////////
////////




 

    /////Section B/////

    /////Declare variable////
    double budgets[10];
    double total = 0;
    double average =0;
    int i, j;
    float temp;

    // Capture budgets
    for (i = 0; i < 10; i++) {
        printf("Enter budget for department %d ", i + 1);
        scanf("%f", &budgets[i]);
        total += budgets[i];
    }

    // Display budgets
    printf("\nDepartment Budgets:\n");
    for (i = 0; i < 10; i++) {
        printf("Dept %d %.2f\n", i + 1, budgets[i]);
    }

    // Calculate average
    average = total / 10;
    printf("\nTotal Budget %.2f\n", total);
    printf("Average Budget %.2f\n", average);

    // Sort budgets (Bubble Sort)
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }
    // Display sorted budgets
    printf("\nBudgets Sorted (Lowest → Highest):\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }




/////////
////////
////////
///////
////////
////////

int main() {
    char registrations[20][20];
    char search[20];
    int found = 0;

    ////// Capture 20 registration numbers///////
    printf("Enter 20 vehicle registration numbers\n");
    for (int i = 0; i < 20; i++) {
        printf("Registration %d ", i + 1);
        scanf("%s", registrations[i]);
    }

    ////// Display all registration numbers///////
    printf("\nAll Registration Numbers\n");
    for (int i = 0; i < 20; i++) {
        printf("%d: %s\n", i + 1, registrations[i]);
    }

    /////// Search for a particular registration number///////
    printf("\nEnter a registration number to search ");
    scanf("%s", search);

    for (int i = 0; i < 20; i++) {
        if (strcmp(registrations[i], search) == 0) {
            printf("Registration %s found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Registration %s not found.\n", search);
    }

    return 0;
}


