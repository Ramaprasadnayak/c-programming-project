/*
10.Write a C program to manage and search customer order details using structures. The program should:

Accept multiple customer orders, including:

Customer ID

Customer Name

Product Name

Amount

Store all the customer details in a file named customer-details.txt.

Allow the user to search for a customer using their ID.

If the customer is found, display their order details and confirm that the record has been saved in the file.

If the customer is not found or if file operations fail, display an appropriate error message.

Requirements:

Define a struct named customer with the mentioned fields.

Use typedef for the struct.

Create the following functions:

storeinfile() – to write customer details to a file.

searchForCustomer() – to find a customer by ID and return their index if found.

Use a global flag variable to handle errors.

Validate file creation and search results appropriately.
*/

//solution
#include<stdio.h>
char filename[]="customer-details.txt";
int flag;

struct customer{
    int id;
    char name[20];
    char product[20];
    int amount;
};
typedef struct customer customer;

void storeinfile(customer c1[],int num){
    FILE *file=fopen(filename,"w");
    if(file==NULL){
        printf("Error in creating the file!\n");
        flag=0;
    }
    else{
    for(int i=0;i<num;i++){
        fprintf(file,"Customer %d\n  Id : %d\n  Name : %s\n  Product :%s\n  Amount : %d\n\n",i+1,c1[i].id,c1[i].name,c1[i].product,c1[i].amount);
    }
    fclose(file);
    flag=1;
    }
}

int searchForCustomer(customer c1[],int search,int num){
    int pos,point=0;
    for (int i=0;i<num;i++){
        if(c1[i].id==search){
            pos=i;
            point=1;
            break;
        }
    }
    if(point==1){
        return pos;
    }
    else{
        flag=0;
    }
    
}

int main(){
    int num,search,pos;
    printf("Enter number of orders :");
    scanf("%d",&num);
    customer c1[num];
    printf("(Id,Name,Product,Amount)\n");
    for (int i=0;i<num;i++){
        printf("Order %d :",i+1);
        scanf("%d%s%s%d",&c1[i].id,c1[i].name,c1[i].product,&c1[i].amount);
    }
    storeinfile(c1,num);
    printf("Enter customer ID to be searched :");
    scanf("%d",&search);
    pos=searchForCustomer(c1,search,num);
    if(flag==1){
        printf("Order found: %s - %s - %d",c1[pos].name,c1[pos].product,c1[pos].amount);
        printf("\nRecord saved in %s\n",filename);
    }
    else{
        printf("Error!");
    }
    return 0;
}