/*13.Better Deal

There are 22 stores in Chefland and both sell the same product. The first store sells the product for 100100 rupees whereas the second store sells it for 200200 rupees.
It is the holiday season and both stores have announced a special discount. The first store is providing a discount of AA percent on its product and the second store is providing a discount of BB percent on its product.
Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal?

Input Format
    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of a single line of input containing two space-separated integers AA and BB denoting the discount provided by the first and second store respectively.
Output Format
For each test case, output FIRST if the first store is cheaper, SECOND if the second store is cheaper, and BOTH if both the stores are selling the product for the same price after discount.

The checker is case-insensitive so answers like FiRsT, first, and FIRST would be considered the same.
Constraints
    1≤T≤10001≤T≤1000
    1≤A,B≤1001≤A,B≤100

Sample 1:
Input
4
5 20
10 60
7 7
10 55

output
FIRST
SECOND
FIRST
BOTH
Explanation:
Test case 11: The first store has a discount of 5%5%. Thus, the final price of product at first store would be 9595.
The second store has a discount of 20%20%. Thus, the final price of the product at the second store would be 160160. The product at the first store would be cheaper.

Test case 22: The first store has a discount of 10%10%. Thus, the final price of product at first store would be 9090.
The second store has a discount of 60%60%. Thus, the final price of the product at the second store would be 8080. The product at the second store would be cheaper.

Test case 33: The first store has a discount of 7%7%. Thus, the final price of product at first store would be 9393.
The second store has a discount of 7%7%. Thus, the final price of the product at the second store would be 186186. The product at the first store would be cheaper.

Test case 44: The first store has a discount of 10%10%. Thus, the final price of product at first store would be 9090.
The second store has a discount of 55%55%. Thus, the final price of the product at the second store would be 9090. The product at both stores would have same price.
*/
//solution
#include <stdio.h>

int storeA(int a){
    int amount=0,dis=0;
    dis=(100*a)/100;
    amount=100-dis;
    return amount;
}

int storeB(int b){
    int amount=0,dis=0;
    dis=(200*b)/100;
    amount=200-dis;
    return amount;
}


int main() {
	int test;
	int am1,am2,a,b;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d%d",&a,&b);
	    am1=storeA(a);
	    am2=storeB(b);
	    if(am1<am2){
	        printf("FIRST\n");
	    }
	    else if(am1>am2){
	        printf("SECOND\n");
	    }
	    else if(am1==am2){
	        printf("BOTH\n");
	    }
	}
    return 0;
}

