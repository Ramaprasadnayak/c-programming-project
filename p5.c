/*
`1. Medical Insurance Eligibility Checker`  
`Scenario:`  
A hospital wants to check 
if a `patient qualifies 
for insurance coverage` based on these conditions:  

• Age `between 18 and 60`  
• No `pre-existing health condition` (yes/no)  
• Monthly salary `≥ ₹25,000`  

Write a program using a `function` 
to check if a patient is eligible 
for `medical insurance`.

`Input Example:`  
```
Enter Age: 45
Any Pre-existing Condition? (yes/no): no
Enter Monthly Salary: 30000
```

`Output Example:`  
```
Eligible for Medical Insurance
```

*/

//solution
#include<stdio.h>
#include<string.h>

int checkeligibility(int age,char choice[],int salary){
    if((age>=18 && age<=60) && (strcmp(choice,"no")==0) && (salary>=25000)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int age,salary,flag;
    char choice[10];
    printf("Enter the Age: ");
    scanf("%d",&age);
    printf("Any Pre-existing Condition? (yes/no): ");
    scanf("%s",choice);
    printf("Enter Monthly Salary: ");
    scanf("%d",&salary);
    flag=checkeligibility(age,choice,salary);
    if(flag==1){
        printf("Eligible for Medical Insurance");
    }
    else{
        printf("Not eligible for Medical Insurance");
    }
    return 0;
}
