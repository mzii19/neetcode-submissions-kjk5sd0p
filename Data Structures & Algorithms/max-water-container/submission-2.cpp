class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int result=0;
        while(left<right){
            int curr=min(heights[left],heights[right]);
            int distance=right-left;
            int calc=distance*curr;
            result=max(result,calc);
            if(heights[left]>heights[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return result;
    }
};
