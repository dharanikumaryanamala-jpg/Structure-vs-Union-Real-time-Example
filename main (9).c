#include<stdio.h>
#include<string.h>
struct Bankaccount
{
    int accountno;
    char name[100];
    double bal;
    char branch[50];
};
union Bankaccountunion
{
    int accountno;
    char name[100];
    double bal;
    char branch[50]; 
};
int main()
{
    struct Bankaccount acc1;
    acc1.accountno=101;
    strcpy(acc1.name,"Dharani");
    acc1.bal=5000.49;
    strcpy(acc1.branch,"Tadipatri");
    printf("Account number : %d\n", acc1.accountno);
    printf("customer name : %s\n",acc1.name);
    printf("Balance : %.2f\n",acc1.bal);
    printf("Branch : %s\n",acc1.branch);
    union Bankaccountunion acc2;
    acc2.accountno = 201;
    printf("Account number: %d\n", acc2.accountno);
    strcpy(acc2.name, "Abhi");
    printf("customer name : %s\n", acc2.name);
    acc2.bal = 10000.50;
    printf("Balance : %.2f\n", acc2.bal);
    strcpy(acc2.branch, "Secunderabad");
    printf("Branch : %s\n", acc2.branch);
    printf("- Only the last stored value is valid.\n");
    printf("- Earlier values get overwritten because all fields share the same memory.\n");
    return 0;
}
