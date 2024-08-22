class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size()-1;
        string st = "aeiouAEIOU";
        while(start < end){
            bool sbool = false;
            bool ebool = false;
            for(char ch : st)
            {
                if(ch == s.at(start))
                    sbool = true;
            }
            if(!sbool){
                start++;
                continue;
            }
            for(char ch : st)
            {
                if(ch == s.at(end))
                    ebool = true;
            }
            if(!ebool){
                end--;
                continue;
            }

            char temp = s.at(start);
            s.at(start) =s.at(end);
            s.at(end) = temp;
            start++;
            end--;
        }
        
        return s;
    }
};