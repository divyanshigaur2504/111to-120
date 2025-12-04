/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include <stdio.h>

#define MAX 1000  // maximum array size

// Simple hash map using array (since nums are positive integers)
int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[MAX];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Hash map: value -> index
    int map[10000];   // assuming values are <= 9999
    for (int i = 0; i < 10000; i++) {
        map[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (complement >= 0 && map[complement] != -1) {
            printf("%d %d\n", map[complement], i);
            return 0;
        }
        map[nums[i]] = i;
    }

    // If no solution
    printf("-1 -1\n");
    return 0;
}
