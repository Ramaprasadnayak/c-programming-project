/*
11.Write a C program to record and search weather data for multiple cities. The program should:

Accept details for multiple cities including:

City Name

Temperature (°C)

Humidity (%)

Store the collected data in a text file named weather_data.txt.

Allow the user to search for a city by name.

If the city is found, display its temperature and humidity, and confirm that the data has been stored in the file.

If the city is not found or file operations fail, display an appropriate error message.

Specifications:

Define a structure city with members: name, temperature, and humidity.

Use a typedef for ease of usage.

Implement the following functions:

storeinfile() – writes all city weather details to a file.

searchForCustomer() – searches for a city by name using strcmp() and returns its index.

Use a global flag variable to track errors in file handling and search results.
*/


//solution
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
    if(flag==1){
        printf("Weather found in %s : %dC , %d %% Humidity",c1[pos].name,c1[pos].temperature,c1[pos].humidity);
        printf("\nRecord saved in %s\n",filename);
    }
    else{
        printf("Error!");
    }
    return 0;
}