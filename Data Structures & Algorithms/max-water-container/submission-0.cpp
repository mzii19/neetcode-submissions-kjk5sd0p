class Solution {
public:
     int maxArea(vector<int>& heights) {
     int result=0;
     int right=heights.size()-1;
     int left=0;
     while(left<right){
        int area= (min(heights[left],heights[right]))*(right-left);
        if(area>result){
            result=area;
        }

        if(heights[right]>heights[left]){
            left++;
        }
        else{
            right--;
        }
     }
     return result;   
    }

};
