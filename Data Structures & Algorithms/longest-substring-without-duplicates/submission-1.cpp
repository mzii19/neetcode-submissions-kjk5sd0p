class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen; 
        int result=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);

            result=max(result,right-left+1);
        }
        return result;
    }
};
