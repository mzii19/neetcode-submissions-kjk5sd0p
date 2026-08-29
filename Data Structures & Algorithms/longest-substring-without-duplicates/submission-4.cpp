class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sample;
        string final="";
        int left=0;
        int maxfinal=0;
        for(int right=0;right<s.size();right++){
            while(sample.find(s[right])!=sample.end()){
                sample.erase(s[left]);
                left++;
            }
            if(sample.find(s[right])==sample.end()){
                sample.insert(s[right]);
                
                maxfinal = max(maxfinal, right - left + 1);
            }
        }
        return maxfinal;
    }
};
