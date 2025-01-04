class Solution {
public:
    string reverseWords(string s) {
        stack<string> Stack;
        string res = "";

        for(int i=0;i<=s.length();i++){
            if(s[i] == ' ' || s[i] == '\0'){
                if(res.length() > 0){
                    Stack.push(res);
                }
                res = "";
            }else{
                res += s[i];
            }
        }

        res = "";
        while(!Stack.empty()){
            res += Stack.top();
            Stack.pop();
            if(!Stack.empty()){
                res += " ";
            }
        }

        return res;
    }
};