class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area=0;
        while(left<right){
            int calcarea=(right-                                left)*min(heights[right],heights[left]);
            area=max(calcarea,area);
            if(heights[left]<=heights[right]){
                left++;
            }
            else if(heights[left]>heights[right]){
                right--;
            }
            
        }
        return area;
    }
};
