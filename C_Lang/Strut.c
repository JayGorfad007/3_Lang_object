/*
                                        Author    : Jay Gorfad
                                        Date      : 5-1-2026
                                        Program   : Customer Record Management System (CRUD)
                                        Objective : To perform Add, Display, Search, Update and Delete operations on Customer Records using Structure.
*/

#include <stdio.h>
#include <string.h>

struct Customer {
    int id;
    char name[30];
    char branch[40];
};

struct Customer c[100];
int n = 0;

void scan();
void display();
void displayParticular();
void update();
void deleteRecord();

int main()
{
    int choice;

    do {
        printf("\n\n--- CUSTOMER MENU ---");
        printf("\n1. Add Customer");
        printf("\n2. Display All Customers");
        printf("\n3. Display Particular Customer");
        printf("\n4. Update Customer");
        printf("\n5. Delete Customer");
        printf("\n0. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: scan(); break;
            case 2: display(); break;
            case 3: displayParticular(); break;
            case 4: update(); break;
            case 5: deleteRecord(); break;
            case 0: printf("\nThank You!"); break;
            default: printf("\nInvalid choice!");
        }

    } while(choice != 0);

    return 0;
}

void scan()
{
    printf("\nEnter Customer ID : ");
    scanf("%d", &c[n].id);

    printf("Enter Customer Name : ");
    scanf(" %[^\n]", c[n].name);

    printf("Enter Branch : ");
    scanf(" %[^\n]", c[n].branch);

    n++;
    printf("\nCustomer Added Successfully!");
}

void display()
{
    int i;

    if(n == 0) {
        printf("\nNo Records Found!");
        return;
    }

    for(i = 0; i < n; i++) {
        printf("\n\nCustomer %d", i+1);
        printf("\nID     : %d", c[i].id);
        printf("\nName   : %s", c[i].name);
        printf("\nBranch : %s", c[i].branch);
    }
}

void displayParticular()
{
    int id, i, found = 0;

    printf("\nEnter Customer ID to search : ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(c[i].id == id) {
            printf("\nID     : %d", c[i].id);
            printf("\nName   : %s", c[i].name);
            printf("\nBranch : %s", c[i].branch);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nCustomer Not Found!");
}

void update()
{
    int id, i, found = 0;

    printf("\nEnter Customer ID to update : ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(c[i].id == id) {
            printf("Enter New Name : ");
            scanf(" %[^\n]", c[i].name);

            printf("Enter New Branch : ");
            scanf(" %[^\n]", c[i].branch);

            printf("\nCustomer Updated Successfully!");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nCustomer Not Found!");
}

void deleteRecord()
{
    int id, i, j, found = 0;

    printf("\nEnter Customer ID to delete : ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(c[i].id == id) {
            for(j = i; j < n-1; j++) {
                c[j] = c[j+1];
            }
            n--;
            found = 1;
            printf("\nCustomer Deleted Successfully!");
            break;
        }
    }

    if(!found)
        printf("\nCustomer Not Found!");
}
