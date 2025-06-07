/*
`14. Election Vote Count (Using Arrays)`
`Problem Statement:`  
A city conducts an election with `5 candidates`. 
Citizens cast their votes (numbers `1 to 5` representing candidates). 
Write a program to:  
1. Read `N` votes into an array.  
2. Count the total votes for each candidate.  
3. Determine the `winner` (candidate with the highest votes).  

`Function Prototypes:`  
```c
void countVotes(int votes[], int n, int candidateVotes[]);
int findWinner(int candidateVotes[]);
```

`Sample Test Case:`  
`Input:`  
```plaintext
Enter number of votes: 10  
Enter votes (1-5): 1 2 2 3 1 4 2 5 1 1  
```
`Output:`  
```plaintext
Candidate 1: 4 votes  
Candidate 2: 3 votes  
Candidate 3: 1 vote  
Candidate 4: 1 vote  
Candidate 5: 1 vote  
Winner: Candidate 1  
```*/

//solution
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
