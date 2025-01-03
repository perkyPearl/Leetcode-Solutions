class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        vector<int> prefixZero(n);
        prefixZero[0] = (s[0] == '0');

        for(int i=1;i<n;i++){
            prefixZero[i] = prefixZero[i-1] + (s[i] == '0');
        }

        vector<int> suffixOnes(n, 0);
        suffixOnes[n - 1] = (s[n - 1] == '1') ? 1 : 0;
        for (int i = n - 2; i >= 0; i--) {
            suffixOnes[i] = suffixOnes[i + 1] + (s[i] == '1');
        }

        int maxScore = 0;
        for(int i=0;i<n-1;i++){
            int currScore =  prefixZero[i] + suffixOnes[i+1];
            maxScore = max(maxScore,currScore);
        }

        return maxScore;
    }
};