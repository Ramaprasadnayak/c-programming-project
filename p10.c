/*
10.Janmansh and Assignments

Janmansh has to submit 33 assignments for Chingari before 1010 pm and he starts to do the assignments at XX pm. Each assignment takes him 11 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?
Input Format
    The first line will contain TT - the number of test cases. Then the test cases follow.
    The first and only line of each test case contains one integer XX - the time when Janmansh starts doing the assignments.
Output Format
For each test case, output Yes if he can complete the assignments on time. Otherwise, output No.
You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).
Constraints
    1≤T≤101≤T≤10
    1≤X≤91≤X≤9
Sample 1:
Input
2
7
9
Output
Yes
No
Explanation:
Test case-1: He can start at 77pm and finish by 1010 pm. Therefore he can complete the assignments.
Test case-2: He can not complete all the 33 assignments if he starts at 99 pm.
*/
//Solution
#include <stdio.h>

int main() {
	int test,t;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d",&t);//in pm
        if(t<=7){
            printf("YES\n");
        }	   
        else{
            printf("NO\n");
        }
	}

}
