class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> groups;
        for(string& g:strs){
            string key= g;
            sort(key.begin(),key.end());
            groups[key].push_back(g);

        }
        vector<vector<string>> result;
        for(auto& [key,group]:groups){
            result.push_back(group);
        }
        return result;
    }
};
