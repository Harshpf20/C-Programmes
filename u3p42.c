//2. Program: Bank customer structure with functions for low-balance display
//          and withdrawal/deposit operations.

#include <stdio.h>
#include <string.h>

struct customer {
    int accno;
    char name[50];
    float balance;
};

// Function (a): Print customers with balance < 100
void printLowBalance(struct customer c[], int n)
{
    int i;
    printf("\nCustomers with balance below Rs.100:\n");
    for(i = 0; i < n; i++)
    {
        if(c[i].balance < 100)
            printf("Account No: %d, Name: %s, Balance: %.2f\n",
                   c[i].accno, c[i].name, c[i].balance);
    }
}

// Function (b): Deposit or Withdrawal
void transaction(struct customer c[], int n, int acc, float amt, int code)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(c[i].accno == acc)
        {
            found = 1;

            if(code == 1)     // deposit
            {
                c[i].balance += amt;
                printf("\nDeposit successful.\n");
                printf("New balance: %.2f\n", c[i].balance);
            }
            else if(code == 0) // withdrawal
            {
                if(c[i].balance < amt)
                {
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                }
                else
                {
                    c[i].balance -= amt;
                    printf("\nWithdrawal successful.\n");
                    printf("Remaining balance: %.2f\n", c[i].balance);
                }
            }
            break;
        }
    }

    if(!found)
        printf("\nAccount number not found.\n");
}

int main()
{
    struct customer c[10];
    int i, acc, code;
    float amt;

    printf("Enter details of 10 customers:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("Customer %d:\n", i+1);

        printf("Account Number: ");
        scanf("%d", &c[i].accno);

        printf("Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Balance: ");
        scanf("%f", &c[i].balance);

        printf("\n");
    }

    // (a) Print low-balance customers
    printLowBalance(c, 10);

    // (b) Handle deposit/withdraw
    printf("\nEnter Account Number for transaction: ");
    scanf("%d", &acc);

    printf("Enter amount: ");
    scanf("%f", &amt);

    printf("Enter code (1 = Deposit, 0 = Withdrawal): ");
    scanf("%d", &code);

    transaction(c, 10, acc, amt, code);

    return 0;
}
