class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;

        while(st<end){
            int mid = st + (end-st) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                
            }
        }
    }
};