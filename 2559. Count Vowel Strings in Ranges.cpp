class Solution {
public:
    bool isVowel(string s){
        int n = s.length()-1;

        if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u'){
            if(s[n] == 'a' || s[n] == 'e' || s[n] == 'o' || s[n] == 'i' || s[n] == 'u'){
                return true;
            }
        }

        return false;
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        
        vector<int> ans(n+1);
        vector<int> res(queries.size());

        for(int i=0;i<n;i++){
            ans[i+1] = ans[i] + isVowel(words[i]);
        }

        for(int i=0;i<queries.size();i++){
            vector<int> query = queries[i];

            res[i] = ans[query[1] + 1] - ans[query[0]];
        }

        return res;
    }
};