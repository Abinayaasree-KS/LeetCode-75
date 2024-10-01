class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVowels = 0;
        int windowVowels = 0;

        std::set <char> vowels = {'a','e','i','o','u'};

        for(int i=0; i<k; i++){
            if(vowels.count(s[i]))
            windowVowels++;
        } 

        maxVowels = windowVowels;

        for(int i=k; i<s.size(); i++){
            if(vowels.count(s[i - k]))
            windowVowels--;

            if(vowels.count(s[i]))
            windowVowels++;

            maxVowels = std::max(maxVowels,windowVowels);
        }

        return maxVowels;

    }
};