/*
    Properties of XOR: 
    1. XOR of a number with itself gives 0 (x ^ x = 0).
    2. XOR of a number with 0 gives the number itself (x ^ 0 = x).
    3. XOR is commutative and associative, so we can rearrange the terms.

    Observation:
    If a number appears an even number of times in XOR operations, it cancels out (x ^ x = 0).
    If a number appears an odd number of times, it will contribute to the final result.

    Formula (A^B) ^ (A^C) ^ (D^E) ^ (D^F) = B ^ C ^ E ^ F
    So, we can XOR all elements of nums1 and nums2 separately and return the result.

    Application:
    1. If nums2 has an odd size, each element of nums1 will appear an odd number of times,
        contributing to the result. So we XOR all elements of nums1.
    2. Similarly, if nums1 has an odd size, each element of nums2 will appear an odd number of times,
        contributing to the result. So we XOR all elements of nums2.
    This optimization avoids the O(n * m) time complexity of nested loops.
*/

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int res = 0;

        if(m % 2 != 0){
            for(int i = 0; i < n; i++){
                res ^= nums1[i];
            }
        }

        if(n % 2 != 0){
            for(int i = 0; i < m; i++){
                res ^= nums2[i];
            }
        }

        return res;
    }
};