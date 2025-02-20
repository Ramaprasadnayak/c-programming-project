/*
Greater Average
You are given 33 numbers A,B,A,B, and CC.
Determine whether the average of AA and BB is strictly greater than CC or not?
NOTE: Average of AA and BB is defined as (A+B)22(A+B)​. For example, average of 55 and 99 is 77, average of 55 and 88 is 6.56.5.
Input Format
    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of 33 integers A,B,A,B, and CC.
Output Format

For each test case, output YES if average of AA and BB is strictly greater than CC, NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).
Constraints

    1≤T≤10001≤T≤1000
    1≤A,B,C≤101≤A,B,C≤10

Sample 1:
Input
5
5 9 6
5 8 6
5 7 6
4 9 8
3 7 2
Output
YES
YES
NO
NO
YES
Explanation:
Test case 11: The average value of 55 and 99 is 77 which is strictly greater than 66.
Test case 22: The average value of 55 and 88 is 6.56.5 which is strictly greater than 66.
Test case 33: The average value of 55 and 77 is 66 which is not strictly greater than 66.
Test case 44: The average value of 44 and 99 is 6.56.5 which is not strictly greater than 88.
Test case 55: The average value of 33 and 77 is 55 which is strictly greater than 22.

*/
#include <stdio.h>

int main() {
	int a,b,c,d;
	scanf("%d",&d);
	for(int i=0;i<d;i++){
	scanf("%d%d%d",&a,&b,&c);
    if(c*2<a+b){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
	}
    return 0;
}
