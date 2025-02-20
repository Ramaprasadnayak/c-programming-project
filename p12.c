/*12.ATM Machine

There is an ATM machine. Initially, it contains a total of KK units of money. NN people (numbered 11 through NN) want to withdraw money; for each valid ii, the ii-th person wants to withdraw AiAi​ units of money.
The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

For each person, determine whether they will get the required amount of money or not.
Input
    The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
    The first line of each test case contains two space-separated integers NN and KK.
    The second line contains NN space-separated integers A1,A2,…,ANA1​,A2​,…,AN​.
Output
For each test case, print a single line containing a string with length NN. For each valid ii, the ii-th character of this string should be '1' if the ii-th person will successfully withdraw their money or '0' otherwise.
Constraints
    1≤T≤1001≤T≤100
    1≤N≤1001≤N≤100
    1≤Ai≤1,000,0001≤Ai​≤1,000,000 for each valid ii
    1≤K≤1,000,0001≤K≤1,000,000
Sample 1:
Input
2
5 10
3 5 3 2 1
4 6
10 8 6 4
Output
11010
0010

Explanation:
Example case 1: The ATM machine initially contains 1010 units of money. The first person comes and withdraws 33 units, so the amount remaining in the machine is 77. Then the second person withdraws 55 units and the remaining amount is 22. The third person wants to withdraw 33 units, but since there are only 22 units of money in the machine, it throws an error and the third person must leave without getting anything. Then the fourth person withdraws 22 units, which leaves nothing in the machine, so the last person does not get anything.

Example case 2: The ATM machine initially contains 66 units of money, so it cannot give anything to the first and second person. When the third person comes, it gives them all the money it has, so the last person does not get anything either.

*/
//solution
#include <stdio.h>

int main() {
    int test,k,n,amount[100];
    scanf("%d",&test);
    for(int i=0; i<test ; i++){
        scanf("%d%d",&n,&k);
        for(int j=0;j<n;j++){
            scanf("%d",&amount[j]);
            if(k-amount[j]<0){
                printf("0");
            }
            else{
                k-=amount[j];
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}


