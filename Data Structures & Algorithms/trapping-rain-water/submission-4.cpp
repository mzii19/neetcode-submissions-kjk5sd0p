class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int left=0;
        int right=height.size()-1;
        int rightmax=height[right];
        int leftmax=height[left];
        while(left<right){
            if(leftmax>=rightmax){
                right--;
                if(rightmax>height[right]){
                    water+=rightmax-height[right];
                }
                rightmax=max(rightmax,height[right]);

            }
            else if(leftmax<rightmax){
                left++;
                if(leftmax>height[left]){
                    water+=leftmax-height[left];
                }
                leftmax=max(leftmax,height[left]);

            }

        }
        return water;
    }
};
