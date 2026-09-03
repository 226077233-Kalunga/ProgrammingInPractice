#include <stdio.h>
int main(){ 
    //// Declare variable///
    
        double revenue=0;
        double expense=0;
        double balance=0;
        int departments=0;
        double payroll=0;
        double procurement=0;
        double assets=0;

        ///Display welcoming message///
        printf("MUNICIPAL BUDGET CALCULATOR\n");
        
        ///PROMPT USER FOR REVENUE///
        printf("please enter the total revenue");
        scanf("%lf", &revenue);
        
        ////PROMPT USER FOR EXPENSE///
        printf("please enter the total expense");
        scanf("%lf", &expense);

        //// Calculating balance////
        balance=revenue-expense;

        ///display values entered aswell as balance///
        printf("total revenue: %.2f", revenue);
        printf("total expense: %.2f", expense);
        printf("balance %f", balance);


        /////prompt user for int department ////
        printf("enter department number");
        scanf("%d", &departments);

        /////prompt user for double payroll///
        printf("enter double payroll amount");
        scanf("%lf", &payroll);

        /////prompt a user for double procurement////
        printf("enter double procurement");
        scanf("%lf", &procurement);

        ////prompt a user for double assets////
        printf("enter double assets");
        scanf("%lf", &assets);   
        
        // Output
       printf("\nMUNICIPAL FINANCIAL SUMMARY\n");
       printf("----------------------------\n");
       printf("Departments: %d\n", departments);
       printf("Payroll: %.2f\n", payroll);
       printf("Procurement: %.2f\n", procurement);
       printf("Assets: %.2f\n", assets);
    return 0;
}