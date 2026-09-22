class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> result;
        for(char c:s){
            need[c]++;
        }
        for(char c:t){
            result[c]++;
        }
        return need==result;
    }
};
