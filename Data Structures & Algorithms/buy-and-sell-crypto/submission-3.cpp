class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left= 0;
        int right=1;
        int result=0;

        while(right<prices.size()){
            int max=prices[right]-prices[left];
            if(max>result){
                result=max;
            }
            else if(max<0){
                left=right;
                right++;
            }
            else{
                right++;
            }
        }
        return result;
    }
};
