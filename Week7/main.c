#include <stdio.h>
#include <string.h>   // Needed for strlen() and strcmp()

int main() {
    ///// Declaring Variables /////
    char supplierName[2][100] = {"ABC Office Supplies", "Namibia Stationery"};
    char supplierEmail[100];
    char supplierNumber[20];
    char supplierTown[50];
    char searchName[100];

    //// 1. Ask the user for supplier email ////
    printf("Enter supplier email: ");
    fgets(supplierEmail, sizeof(supplierEmail), stdin);
    supplierEmail[strcspn(supplierEmail, "\n")] = '\0';

    //// 2. Ask the user for supplier number ////
    printf("Enter supplier number: ");
    fgets(supplierNumber, sizeof(supplierNumber), stdin);
    supplierNumber[strcspn(supplierNumber, "\n")] = '\0';

    //// 3. Ask the user for supplier town ////
    printf("Enter supplier town: ");
    fgets(supplierTown, sizeof(supplierTown), stdin);
    supplierTown[strcspn(supplierTown, "\n")] = '\0';

    //// 4. Display the supplier details (using supplierName[0] as default) ////
    printf("\n--- Supplier Details ---\n");
    printf("Name:    %s\n", supplierName[0]);
    printf("Email:   %s\n", supplierEmail);
    printf("Number:  %s\n", supplierNumber);
    printf("Town:    %s\n", supplierTown);

    //// 5. Display the lengths of the supplier details ////
    printf("\n--- Lengths ---\n");
    printf("Name length: %zu\n", strlen(supplierName[0]));
    printf("Email length: %zu\n", strlen(supplierEmail));
    printf("Town length: %zu\n", strlen(supplierTown));

    //// 6. Ask the user to enter a supplier name to search ////
    printf("\nEnter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    //// 7. Determine whether the supplier exists ////
    if (strcmp(searchName, supplierName[0]) == 0) {
        printf("Supplier found: %s\n", supplierName[0]);
    } else if (strcmp(searchName, supplierName[1]) == 0) {
        printf("Supplier found: %s\n", supplierName[1]);
    } else {
        printf("Supplier not found.\n");
    }

    return 0;
}
