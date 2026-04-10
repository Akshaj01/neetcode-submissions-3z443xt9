class Solution {
public:

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> fleetStack;
        vector<int> time;
        vector<pair<int,double>> cars;
        //calc time for each car
        for (int i = 0; i < position.size(); i++){
            double t = (double) (target - position[i])/speed[i];
            cars.push_back({position[i], t});
        }
        // sort by closest to target to farthest to target
        //(sort by pos)
        sort(cars.begin(), cars.end(), 
            [](const pair<int, double> &a, const pair<int, double> &b) 
                {return a.first > b.first;}
        );

        for (int i = 0; i < cars.size(); i++){
        //if the car behind has a slower time than one in front push to stack
            if (fleetStack.empty() || cars[i].second > fleetStack.top()){
                fleetStack.push(cars[i].second);
            }
            //else do nothing
        }

        return fleetStack.size();
    }
};
