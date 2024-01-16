
#include <stdio.h>

int main()
{
    int choice,balance=1000,repeat,deposit,withdraw,mini[10],i=0;
    
    for(;;)
    {
    printf("\n***********************************\n***    WELCOME TO KERALA ATM    ***\n***********************************\nSelect required service from below\n\n1 Deposit\n2 Withdraw\n3 Check Balance\n4 Mini Statement\n\nYour option is: ");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
       printf("\nEnter the amount to deposit: ");
       scanf("%d",&deposit);
       balance=balance+deposit;
       mini[i]=deposit;
       i++;
       break;
       
       case 2:
       printf("\nEnter the amount to withdraw: ");
       scanf("%d",&withdraw);
       balance=balance-withdraw;
       mini[i]=(withdraw*-1);
       i++;
       break;
       
       case 3:
       printf("\nYour current balance is: %d ",balance);
       break;
       
       case 4:
       printf("\nMini Statement\nCurrent balance: %d \nLast Transactions\n",balance);
       
       for(i=0;i<10;i++)
       {
           printf("\n %d",mini[i]);
           
       }
       break;
    }
    
    printf("\n\n************************\nDo you want to continue?\nPress 1 for 'Yes' and 2 for 'No'\n\nYour option is: ");
    scanf("%d",&repeat);
    if(repeat==2)
    {
        printf("\n***********************\n*** Have a nice day ***\n***********************");
        break;
    }
    }
    return 0;
}
