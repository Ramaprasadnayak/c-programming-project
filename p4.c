#include<stdio.h>
void countVotes(int votes[],int n,int candidatevote[]){
    for(int i=0;i<n;i++){
        candidatevote[votes[i]-1]++;
    }
}
int findwinner(int candidatevotes[]){
    int max=0;
    for(int i=1;i<5;i++){
        if(candidatevotes[i]>candidatevotes[max]){
            max=i;
        }

    }
    return max+1;
}
int main(){
    int votes[100];
    int n;
    printf("Enter the number of votes :");
    scanf("%d",&n);
    printf("Enter the votes :");
    for(int i=0;i<n;i++){
        scanf("%d",&votes[i]);
    }
    int candidatesVote[5]={0,0,0,0,0};
    countVotes(votes,n,candidatesVote);
    for(int i=0;i<n;i++){
        printf("Candidate%d vote are %d\n",i+1,candidatesVote[i]);
    }
    return 0;
}
