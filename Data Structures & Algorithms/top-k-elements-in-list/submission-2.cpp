class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freq;
        for(int count:nums){
            freq[count]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& it:freq){
            int num=it.first;
            int fr=it.second;
            bucket[fr].push_back(num);
        }
        vector<int> result;
        for(int i=bucket.size()-1;i>=0 && result.size() < k;i--){
            for(int val:bucket[i]){
                result.push_back(val);
                if (result.size() == k) {
                    break;}
            }
        }
        return result;
    }
};
