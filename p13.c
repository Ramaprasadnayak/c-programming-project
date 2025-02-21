#include<stdio.h>
#include<string.h>
char filename[]="weather_data.txt";
int flag;

struct city{
    int humidity,temperature;
    char name[20];
};
typedef struct city city;

void storeinfile(city c1[],int num){
    FILE *file=fopen(filename,"w");
    if(file==NULL){
        printf("Error in creating the file!\n");
        flag=0;
    }
    else{
    for(int i=0;i<num;i++){
        fprintf(file,"City %d\n  Name : %s\n  Temperature : %d\n  Humidity : %d\n\n",i+1,c1[i].name,c1[i].temperature,c1[i].humidity);
    }
    fclose(file);
    flag=1;
    }
}

int searchForCustomer(city c1[],char search[],int num){
    int pos,point=0;
    for (int i=0;i<num;i++){
        if(strcmp(c1[i].name,search)==0){
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
    int num,pos;
    char search[20];
    printf("Enter number of cities :");
    scanf("%d",&num);
    city c1[num];
    printf("(city,temperature,humidity)\n");
    for (int i=0;i<num;i++){
        printf("City %d :",i+1);
        scanf("%s%d%d",c1[i].name,&c1[i].temperature,&c1[i].humidity);
    }
    storeinfile(c1,num);
    printf("Enter city name to be searched :");
    scanf("%s",search);
    pos=searchForCustomer(c1,search,num);
    if(flag=1){
        printf("Weather found in %s : %dC , %d %% Humidity",c1[pos].name,c1[pos].temperature,c1[pos].humidity);
        printf("\nRecord saved in %s\n",filename);
    }
    else{
        printf("Error!");
    }
    return 0;
}