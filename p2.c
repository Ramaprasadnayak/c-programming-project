/*
`2. DNA Sequence Pattern Finder`
`Scenario:`
A `biotech lab` is analyzing DNA sequences. Given a `DNA string` (containing only 'A', 'T', 'G', 'C'), check if a `specific pattern exists in it`.

Use `string functions` to `find and count occurrences` of a given pattern.

`Input Example:`
```
Enter DNA Sequence: ATGCGATCGT
Enter pattern to search: ATG
```

`Output Example:`
```
Pattern found 1 time(s) in the DNA sequence.
```
*/
//Solution
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
