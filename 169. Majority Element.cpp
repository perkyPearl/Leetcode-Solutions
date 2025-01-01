class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> Map;
        int n = nums.size();

        for(int num: nums){
            Map[num]++;
        }
        
        for(int num:nums){
            if(Map[num] > n/2){
                return num;
            }
        }

        return -1;
    }
};