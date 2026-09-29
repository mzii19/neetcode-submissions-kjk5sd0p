class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxfreq=0;
        int result=0;
        
        unordered_map <char,int> caps;
        for(int right=0;right<s.size();right++){
            caps[s[right]]++;
            maxfreq=max(caps[s[right]],maxfreq);
            if(right-left+1-maxfreq>k){
                caps[s[left]]--;
                left++;
                
            }
            result=max(result,right-left+1);
            
        }
        return result;
    }
};
