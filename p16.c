/*Sort Array by Parity
16.You are given an array of integers. Your task is to sort the array such that all odd numbers come before all even numbers while maintaining the original relative order of the odd and even numbers.

Input Format
The first line contains an integer 
N
N (the array size).
The second line contains 
N
N space-separated integers representing the elements of the array.
Output Format
Output the sorted array where all odd numbers appear before all even numbers, maintaining the relative order.

Constraints
1
≤
N
≤
1
0
5
1≤N≤10 
5
 
0
≤
a
[
i
]
≤
1
0
9
0≤a[i]≤10 
9
 
Sample 1:
Input
Output
5
3 1 2 4 5
3 1 5 2 4
Explanation:
In the given array, the odd numbers are 3,1 and 5, and the even numbers are 2 and 4. After sorting by parity while maintaining the original order, the result is 3,1,5,2,4.

Sample 2:
Input
Output
6
2 4 6 1 3 5
1 3 5 2 4 6
Explanation:
In the given array, the odd numbers are 1,3 and 5, and the even numbers are 2,4 and 6. After sorting by parity while maintaining the original order, the result is 1,3,5,2,4,6.*/




//solution

#include <stdio.h>
#include <stdlib.h>
int N;
void sortArrayByParity(int* nums) {
    // Write your code here
}

int main() {
    int n;
    scanf("%d", &n);
    N=n;
    int* nums = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    sortArrayByParity(nums);

    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }

    free(nums);
    return 0;
}