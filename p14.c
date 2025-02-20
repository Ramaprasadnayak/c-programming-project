/*14.Hackerman

Hackerman wants to know who is the better player between Bob and Alice with the help of a game.

The game proceeds as follows:

    First, Alice throws a die and gets the number AA
    Then, Bob throws a die and gets the number BB
    Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.

Given AA and BB, determine who wins the game.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    The first and only line of each test case contains two space-separated integers AA and BB.

Output Format

For each test case, output on a new line the winner of the game: Alice or Bob.

Each letter of the output may be printed in either uppercase or lowercase, i.e, Alice, ALICE, AlIce and aLIcE will all be considered equivalent.
Constraints

    1≤T≤361≤T≤36
    1≤A≤61≤A≤6
    1≤B≤61≤B≤6

Sample 1:
Input
3
2 1
1 1
2 2

Output
Alice
Alice
Bob

Explanation:

Test case 11: A=2A=2 and B=1B=1. Their sum is 2+1=32+1=3 which is a prime number, so Alice wins.
Test case 22: A=1A=1 and B=1B=1. Their sum is 1+1=21+1=2 which is a prime number, so Alice wins.
Test case 33: A=2A=2 and B=2B=2. Their sum is 2+2=42+2=4 which is not a prime number, so Bob wins.
*/
//solution
#include <stdio.h>

int main() {
	// your code goes here
	int test,a,b,isprime,flag;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d%d",&a,&b);   
	    isprime=a+b;
	    for(int i=2;i<isprime;i++){
	        if(isprime%i==0){
	            flag=0;
	            break;
	        }
	        else{
	            flag=1;
	        }
	    }
	    if(flag==0){
	        printf("Bob\n");
	    }
	    else if(flag==1){
	        printf("Alice\n");
	        
	    }
	}
    return 0;
}


