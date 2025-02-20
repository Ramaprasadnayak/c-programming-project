/*15.Apples and oranges

Rushitote went to a programming contest to distribute apples and oranges to the contestants.
He has NN apples and MM oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that:

    Every contestant gets an equal number of apples; and
    Every contestant gets an equal number of oranges.

Note that every fruit with Rushitote must be distributed, there cannot be any left over.

For example, 22 apples and 44 oranges can be distributed equally to two contestants, where each one receives 11 apple and 22 oranges.
However, 22 apples and 55 oranges can only be distributed equally to one contestant.
Input Format
    The first line of input will contain a single integer TT, denoting the number of test cases.
    The first and only line of each test case contains two space-separated integers NN and MM — the number of apples and oranges, respectively.
Output Format
For each test case, output on a new line the answer: the maximum number of contestants such that everyone receives an equal number of apples and an equal number of oranges.
Constraints
    1≤T≤10001≤T≤1000
    1≤N,M≤1091≤N,M≤109
Sample 1:
Input
3
1 5
2 4
4 6
Output
1
2
2

Explanation:
Test case 11: There's only one apple, so distributing to more than one person is impossible.
Test case 22: As explained in the statement, 22 people can each receive 11 apple and 22 oranges.
Test case 33: 22 people can each receive 22 apples and 33 oranges. It's not possible to distribute equally to more than two people.
*/

//solution
#include <stdio.h>
#include<stdlib.h>

int main() {
	int test,a,b,c,temp;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d%d",&a,&b);
        while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    c=abs(a);
    printf("%d\n",c);
	}
	return 0;
}


