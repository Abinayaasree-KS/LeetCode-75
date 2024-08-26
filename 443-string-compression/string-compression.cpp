class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int count = 0;
        for(int i=0; i<n; ++i){
            int j = i;
            while(j<n && chars[j] == chars[i]){
                ++j;
            }
            int grouplength = j - i;

            chars[count++] = chars[i];
            if(grouplength > 1){
            for(char c : std::to_string(grouplength)){
                chars[count++] = c;
            }
            }
            i =j-1;
        }
        return count;
    }
};