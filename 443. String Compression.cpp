class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0,j=0;
        int n=chars.size();
    
        while(j<n){
            int currCh = chars[j];
            int count = 0;

            while(j<n && chars[j] == currCh){
                count++;
                j++;
            }

            chars[i++] = currCh;

            if(count>1){
                string countStr = to_string(count);
                for (char digit : countStr) {
                    chars[i++] = digit;
                }
            }
        }  

        return i;
    }
};