class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int pileMax = *max_element(piles.begin(), piles.end());
        int l = 1;
        int r = pileMax;
        int answer = -1;
        while (l <= r){
            int k = (l + r) / 2;
            int hours = 0;
            for (int i = 0; i < piles.size(); i++){
                hours += (piles[i] + k - 1)/ k;
            }

            if (hours <= h){
                answer = k;
                r = k - 1;
            }
            
            else l = k + 1;
        }
        return answer;
    }
};
