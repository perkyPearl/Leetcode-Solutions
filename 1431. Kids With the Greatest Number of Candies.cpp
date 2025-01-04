class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int n = candies.size();
        vector<bool> res;
        int maxCandies = 0;

        for(int i=0;i<n;i++){
            maxCandies = max(candies[i],maxCandies);
        }

        for(int i=0;i<n;i++){
            res.push_back(((candies[i] + extraCandies) >= maxCandies));
        }

        return res;
    }
};