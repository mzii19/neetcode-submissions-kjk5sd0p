class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        //left->right
        for(int i=0;i<nums.size();i++){
            if(i==0){
                output.push_back(1);
            }
            else{
                int left=output[i-1]*nums[i-1];
                output.push_back(left);
            }
        }
        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1){
                right*=nums[nums.size()-1];
                continue;
                
            }
            else{
                output[i]=right*output[i];
                right*=nums[i];
            }

        }
        return output;
    }
};
