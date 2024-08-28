class Solution {
public:
    int lengthOfLastWord(string s) {
        bool count = false;
        int length = 0;
        for(int i=s.size()-1; i>=0; i--){
            if (s[i] != ' '){
                count = true;
                length++;
            }
            else if(count)
            break;
        }
        return length;
        
    }
};