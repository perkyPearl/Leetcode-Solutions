class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        vector<int> countArr(n+1);

        for(int i=0;i<n;i++){
            countArr[nums[i]]++;

            if(countArr[nums[i]] > 1){
                return nums[i];
            }
        }

        return -1;
    }
};