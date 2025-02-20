#include<stdio.h>
#include<string.h>
struct passenger{
    int age;
    char name[100];
    char place[10];
};
void disp(struct passenger p1[],int num){
    for(int i=0;i<num;i++){
        printf("Passenger-%d\n Name:%s\n Age:%d\n Destination:%s\n",i+1,p1[i].name,p1[i].age,p1[i].place);
    }
}

void sorting_by_destination(struct passenger p1[],int num){
    struct passenger temp;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(p1[j].place[0]>p1[j+1].place[0]){
                temp=p1[j];
                p1[j]=p1[j+1];
                p1[j+1]=temp;
            }
        }
        
    }
    printf("\nsorting comleted!\n");
    
}

void searching_for_passengers(struct passenger p1[],char search[],int num){
    for(int i=0;i<num;i++){
        if(strcmp(search,p1[i].place)==0){
            printf("Passengers travelling to %s is %s",search,p1[i].name);
        }
    }
}
int main(){
    int num,choice,i;
    char search[20];
    struct passenger p1[100];
    printf("Enter number of of passengers :");
    scanf("%d",&num);
    printf("Enter the details\n");
    for(i=0;i<num;i++){
        printf("Passenger %d :",i+1);
        scanf("%s%d%s",p1[i].name,&p1[i].age,p1[i].place);
    }

    while(choice!=5){
    printf("\nCHOICE\n1.add a new passenger\n2.sorting by destination\n3.searching for passengers\n4.display\n5.Exit\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:i++;
        printf("Enter the details\n");
        printf("Passenger %d :",i);
        scanf("%s%d%s",p1[num].name,&p1[num].age,p1[num].place);
        num++;
        break;

        case 2:sorting_by_destination(p1,i);
        break;

        case 3:printf("Enter destination to search:");
        scanf("%s",search);
        searching_for_passengers(p1,search,i);
        break;

        case 4:disp(p1,i);
        break;

        case 5:printf("Thank you\n");
        break;

        default:printf("invalid choice\n");
    }
    }
    return 0;
}
