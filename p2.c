#include<stdio.h>
#include<string.h>

int main(){
    char dna[100],search[100],count;
    printf("Enter DNA Sequence:");
    scanf("%s",dna);
    printf("Enter a pattern to search:");
    scanf("%s",search);
    char *ptr=dna;
    while(ptr==(strstr(dna,search))){
        count++;
        ptr++;
    }
    printf("Pattern found %d time(s) in the DNA sequence.",count);
    return 0;
    
}
