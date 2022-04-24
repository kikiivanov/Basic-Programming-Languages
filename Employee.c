#include <stdio.h>
#include <stdlib.h>

#define NL printf("\n")

/*3. Write a menu driven program in C to create a structure employee having fields empid, empname, salary.
     Accept the details of 'n' Employees from user and perform the following operations using function.

- Search by Emp-Id
- Display All
- Display Names of Employee having Salary > 10000. */

struct Employee
{
    int empid;
    char empname[20];
    int salary;
} employees[10];

void search(int r)
{
    int id, i;
    printf("Enter ID: ");
    scanf("%d", &id);

    for (i = 0; i < r; i++) {
        if (employees[i].empid == id)
        {
            printf("\nEmployee name: %s", employees[i].empname);
            printf("\nEmployee salary: %d\n", employees[i].salary);
        }
    }
}

void display_all(int r)
{
    printf("List of all employees:\n");
    printf("ID\t\tName\t\tSalary\n");
    for (int i = 0; i < r; i++)
        printf("%d\t\t%s\t\t%d\n", employees[i].empid, employees[i].empname, employees[i].salary);
}

void display_best(int r)
{
    printf("ID\t\tName\t\tSalary\n");
    for (int i = 0; i < r; i++)
    {
        if (employees[i].salary > 10000)
            printf("%d\t\t%s\t\t%d\n", employees[i].empid, employees[i].empname, employees[i].salary);
    }
}

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    NL;

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Employee No.%d\n", i+1);
        printf("Enter employee ID: ");
        scanf("%d", &employees[i].empid);
        printf("Enter employee name: ");
        scanf("%s", employees[i].empname);
        printf("Enter salary: ");
        scanf("%d", &employees[i].salary);
        NL;
    }

    int ch;
    printf("\n-----------------------------------------\n");
    printf("\t\tMenu\n");
    printf("-----------------------------------------");
    printf("\n 1: Search Employee by E-ID");
    printf("\n 2: List of All Employee");
    printf("\n 3: Display Employee Name whose Salary > 10000 ");
    printf("\n 4: Exit");

    while(1)
    {
        printf("\n-----------------------------------------\n");
        printf("\nEnter Your Choice: ");
        scanf("\n %d", &ch);

        switch(ch)
        {
            case 1:
                search(n);
                break;
            case 2:
                display_all(n);
                break;
            case 3:
                display_best(n);
                break;
            case 4:
                exit(0);
            default:
                printf("WRONG SEARCH! TRY AGAIN!\n");
        }
    }

    return 0;
}

