class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector <pair<int,double>> car;
        for(int i=0;i<n;i++){
            double time=(double)(target-position[i])/(speed[i]);
            car.push_back({position[i],time});
        }
        sort(car.rbegin(),car.rend());
        int fleet=0;
        double fleetime=0;
        for(int i=0;i<n;i++){
            double currenttime=car[i].second;
            if(currenttime>fleetime){
                fleet++;
                fleetime =currenttime;
            }
        }
        return fleet;
    
        
    }
};
