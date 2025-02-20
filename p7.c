#include<stdio.h>
int withdraw(int amount,int val){
    if((amount-val) <0){
        printf("Insufficient bank balance..");
    }
    else{
        amount-=val;
        printf("%d amount withdrawed\n",val);
    }
    return amount;
}

int deposit(int amount,int val){
    amount+=val;
    printf("%d amount deposited",val);
    return amount;
}

void checkbalance(int amount){
    printf("The current bank balance is: %d",amount);
}

int main(){
    int choice,i,amount=0,val;
    while(choice!=4){
    printf("\nEnter your choice:\n1. Withdraw\n2. Deposit\n3. Check Balance\n4. Exit\nChoice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter value to be withdrawed: ");
        scanf("%d",&val);
        amount=withdraw(amount,val);
        break;

        case 2:
        printf("Enter value to be deposited: ");
        scanf("%d",&val);
        amount=deposit(amount,val);
        break;
        
        case 3:checkbalance(amount);
        break;
        
        case 4:printf("Thank You");
        break;

        default:printf("Enter a valid choice");

    }
}
return 0;
}