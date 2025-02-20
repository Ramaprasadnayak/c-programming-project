#include<stdio.h>

int main(){
    int num,tax=0;
    char name[100];
    printf("Enter number of vehicles: ");
    scanf("%d",&num);
    printf("Enter vehicle types\n('c' for car,'b' for bus ,'t' for truck,'s' for bike): ");
    for(int i=0;i<num;i++){
        scanf(" %c",&name[i]);
    }
    for(int j=0;j<num;j++){
        switch(name[j]){
            case 'c':tax+=50;
            break;
            case 'b':tax+=80;
            break;
            case 't':tax+=100;
            break;
            case 's':tax+=20;
            break;
            default:printf("\ninvalid entery at %d position\n",j+1);
        }

    }
    printf("Total Toll Tax: %d",tax);
    return 0;
}