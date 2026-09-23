class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> cars;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/(speed[i]);
            cars.push_back({position[i],time});
        }
        sort(cars.rbegin(),cars.rend());

        double slowestTime=0;
        int fleet=0;

        for(auto car:cars){
            double car_time=car.second;

            if(car_time>slowestTime){
                fleet++;
                slowestTime=car_time;
            }
        }
        return fleet;
        
    }
};
