class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> window;
        for( char c: t){
            need[c]++;
        }

        int have=0;
        int needUni=need.size();
        int left=0;
        int start=0;
        int minLen=INT_MAX;
        for(int right=0;right<s.size();right++){
            char c=s[right];
            window[c]++;
            if(need.count(c) && window[c]==need[c]){
                have++;
            }
            while(have==needUni){
                if((right-left+1)<minLen){
                    minLen=right-left+1;
                    start=left;
                }
                char leftChar=s[left];
                window[leftChar]--;
                if(need.count(leftChar) && 
                window[leftChar]<need[leftChar]){
                    have--;
                }
                left++;
            }
            
        }
        if(minLen==INT_MAX){
                return "";
            }
        return s.substr(start, minLen);
    }
};
