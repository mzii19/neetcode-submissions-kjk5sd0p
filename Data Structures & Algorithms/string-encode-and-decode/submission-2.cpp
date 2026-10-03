class Solution {
public:

    string encode(vector<string>& strs) {
        string encoding = "";
        for(string s:strs){
            encoding+=to_string(s.size())+"#"+s;
            
            }
        return encoding;

    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            string text=s.substr(i,len);
            decoded.push_back(text);
            i+=len;
        }
        return decoded;
    }
};
