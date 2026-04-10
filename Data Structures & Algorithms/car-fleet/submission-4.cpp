class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        for (int i = 0; i < position.size(); i++) cars.push_back({position[i], speed[i]});
        sort(cars.begin(), cars.end());

        int fleet_count = 0;
        double last_time = 0;

        for (int i = cars.size() - 1; i >= 0; i--){
            double time = (double)(target - cars[i].first) / cars[i].second;
            
            if (time > last_time){
                fleet_count++;
                last_time = time;
            }

        }

        return fleet_count;


    }
};
