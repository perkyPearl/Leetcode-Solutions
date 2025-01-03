class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        vector<long long> sum(n,0);
        sum[0] = nums[0];

        for(int i=1;i<n;i++){ 
            sum[i] = nums[i] + sum[i-1];
        }

        for(int i=0;i<n-1;i++){
            if(sum[i] >= (sum[n-1]-sum[i])){
                count++;
            }
        }

        return count;
    }
};