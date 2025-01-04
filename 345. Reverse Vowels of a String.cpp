class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }

        return false;
    }

    string reverseVowels(string s) {
        string vowels = "";
        int n = s.length();

        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                vowels += s[i];
            }
        }

        int idx = vowels.length()-1;

        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i] = vowels[idx--];
            }
        }

        return s;
    }
};