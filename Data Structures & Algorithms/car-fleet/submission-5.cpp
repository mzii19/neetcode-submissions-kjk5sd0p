class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector <pair<int,double>> result;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            result.push_back({position[i],time});
        }
        sort(result.rbegin(),result.rend());
        stack <double> st;
        for(auto res:result){
            double time = res.second;
            if(st.empty() || time>st.top()){
                st.push(time);
            }
        }
        return st.size();
    }
};
