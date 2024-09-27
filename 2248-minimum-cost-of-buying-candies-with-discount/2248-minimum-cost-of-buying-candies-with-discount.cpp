class Solution {
public:
    int minimumCost(vector<int>& cost) {
        //free candy <= minimum of two candies (a, b)

        sort(cost.begin(), cost.end() , greater<int>());
        int minCost = 0;
        int cnt = 0;
        for(int i =0; i<cost.size(); ++i){
            minCost += cost[i];
            cnt++;
            if(cnt == 3){
                minCost = minCost - cost[i];
                cnt =0;
            }
        }
        return minCost;
    }
};