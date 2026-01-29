#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> freq(256,0);
        vector<int> freq1(256,0);
    
        for(char c:s){
            freq[c]++;
        }
        for(char c:t){
            freq1[c]++;
        }
        for(char c:s){
            if(freq[c]!=freq1[c]){
                return false;
            }
        }
        return true;
    }
};






