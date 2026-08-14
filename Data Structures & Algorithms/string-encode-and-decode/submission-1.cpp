class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(string str:strs){
            s+= to_string(str.size())+"#"+str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector <string> result;
        int i=0;
        while(i<s.size()){
            int j=i;
            
            
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            string str=s.substr(j,len);
            result.push_back(str);
            i=j+len;

        }
        return result;
    }
};
