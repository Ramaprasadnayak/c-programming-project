
#include<stdio.h>

int highestscore(int scores[],int num){
    int max=0;
    for(int i=0;i<num;i++){
        if(scores[i]>scores[max]){
            max=i;
        }
    }
    return scores[max];
}

int lowestscore(int scores[],int num){
    int min=0;
    for(int i=0;i<num;i++){
        if(scores[i]<scores[min]){
            min=i;
        }
    }
    return scores[min];
}

float average(int scores[],int num){
    float sum=0,avg;
    for(int i=0;i<num;i++){
        sum+=(float)scores[i];
    }
    avg=sum/(float)num;
    return avg;
}

int main(){
    int num,highest,lowest,scores[20];
    float avg;
    printf("Enter the total matches :");
    scanf("%d",&num);
    printf("Enter %d scores :",num);
    for(int i=0;i<num;i++){
        scanf("%d",&scores[i]);
    }
    highest=highestscore(scores,num);
    lowest=lowestscore(scores,num);
    avg=average(scores,num);
    printf("Highest Score: %d\nLowest Score: %d\nAverage Score: %.3f\n",highest,lowest,avg);
    return 0;
}
