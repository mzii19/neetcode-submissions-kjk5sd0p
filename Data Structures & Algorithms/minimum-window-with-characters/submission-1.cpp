class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()){
            return "";
        }
        int left=0;
        int min_len=INT_MAX;

        int start=0;
        int required=t.size();
        unordered_map <char,int> need;
        for(char c:t){
            need[c]++;
            
        }
        
        for(int right=0;right<s.size();right++){

            if(need[s[right]]>0){
                required--;
            }
            need[s[right]]--;


            while(required==0){
                if(right-left+1<min_len){
                    min_len=right-left+1;
                    start=left;
                }

                need[s[left]]++;
                if(need[s[left]]>0){
                    required++;
                }
                left++;
            }
            
            

        }
        if(min_len==INT_MAX) return "";

        return s.substr(start,min_len);
    }

};
