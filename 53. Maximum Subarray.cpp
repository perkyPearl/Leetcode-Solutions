// Using Kadane's Algorithm

// Approach: 
// As we know +ve(bigger) + +ve(smaller) = +ve
// -ve(smaller) + +ve(bigger) = +ve
// -ve(bigger) + +ve(smaller) = -ve
// We elemenate the sum when it goes down to 0, because it doesn't make sense to store it. And we reset it to zero.
// We added the statement at the last because if all the values inside the array is negative or the dominating side is negative. We still got the negative sum as a result!

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            currSum += nums[i];
            maxSum = max(currSum,maxSum);  
            if(currSum < 0){
                currSum = 0;
            }
        }

        return maxSum;
    }
};