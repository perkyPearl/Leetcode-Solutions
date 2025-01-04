class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();

        int p1 = 0, p2 = 0;
        string res = "";

        while(p1 < m && p2 < n){
            res+=word1[p1++];
            res+=word2[p2++];
        }

        while(p1<m){
            res+=word1[p1++];
        }

        while(p2<n){
            res+=word2[p2++];
        }

        return res;
    }
};