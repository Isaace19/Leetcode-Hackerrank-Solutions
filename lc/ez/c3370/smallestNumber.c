/*
 You are given a positive number n.
 Return the smallest number x greater than or equal to n, such that the binary representation of x contains only set bits
 *
 * */

#include <bitset>


class Solution {
public:
    int smallestNumber(int n) {
        int i;
        for (i = 0; i < n; i++) {
            n &= (n - 1);
        }
        return i;
    }
};
