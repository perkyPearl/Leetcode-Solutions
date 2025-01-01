class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> Map;

        for(int num:nums){
            Map[num]++;
        }

        for(int num: nums){
            if(Map[num] == 1){
                return num;
            }
        }

        return -1;
    }
};