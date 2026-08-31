class Solution {
public:
    bool checkInclusion(string s1, string s2) {


        sort(s1.begin(),s1.end());
        int left=0;
        int result=0;
        string res="";
        for(int right=0;right<s2.size();right++){

            res=s2.substr(left,s1.size());
            sort(res.begin(),res.end());
            if(res==s1){
                return true;
            }
            else{
                left++;
            }
            
        }
        return false;
    }
};
