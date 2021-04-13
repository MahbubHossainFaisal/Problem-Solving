class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum= INT_MAX;
        int maxProfit =0;
        
        for(int i=0; i<prices.size();i++){
            minimum = min(minimum,prices[i]);
            maxProfit = max(maxProfit,prices[i]-minimum);
        }
        return maxProfit;
    }
};