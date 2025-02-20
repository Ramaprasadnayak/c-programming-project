
#include<stdio.h>
#define max 10
void calculatetotal(int marks[][max],int num,int sub,int total[]){
    for(int i=0;i<num;i++){
        total[i]=0;
        for(int j=0;j<sub;j++){
            total[i]+=marks[i][j];
        }
    }
}

void swap(int *first,int *second){
    int temp=(*first);
    (*first)=(*second);
    (*second)=(temp);
}

void sortstudents(int total[],int num){
    int isswapped=0;
    do{
    for(int i=0;i<num-1;i++){
        if(total[i]<total[i+1]){
            swap(&total[i],&total[i+1]);
            isswapped=1;
        }
    }
    num--;
}while(isswapped);
}
void readmarks(int marks[][max],int num,int sub){
    printf("Enter marks:");
    for(int i=0;i<num;i++){
        for(int j=0;j<sub;j++){
            scanf("%d",&marks[i][j]);
        }
    }
}
void printtotalmarks(int total[],int num){
    for(int i=0;i<num;i++){
        printf("Total marks: %d",total[i]);
    }
}
int main(){
    int num,sub,total[100];
    int marks[100][max];
    printf("Enter number of students:");
    scanf("%d",&num);
    printf("Enter number of subjects:");
    scanf("%d",&sub);
    readmarks(marks,num,sub);
    sortstudents(total,num);
    calculatetotal(marks,num,sub,total);
    printtotalmarks(total,num);
    return 0;
}
