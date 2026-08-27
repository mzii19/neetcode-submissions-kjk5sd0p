class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minbuy=prices[0];

        for(int right=1;right<prices.size();right++){
            if (prices[right]<minbuy){
                minbuy=prices[right];
            }
            else{
                profit=max(profit,prices[right]-minbuy);
            }
        }
        return profit;
    }
};
