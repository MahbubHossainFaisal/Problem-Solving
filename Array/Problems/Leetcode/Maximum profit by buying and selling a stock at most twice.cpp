class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy1, profit1, buy2, profit2;
 
    
    buy1 = buy2 = INT_MAX;
 
    
    profit1 = profit2 = 0;
 
    for (int i = 0; i < prices.size(); i++) {
 
        
        buy1 = min(buy1, prices[i]);
 
        
        profit1 = max(profit1, prices[i] - buy1);
 
       
        buy2 = min(buy2, prices[i] - profit1);
 
        
        profit2 = max(profit2, prices[i] - buy2);
    }
 
    return profit2;
    }
    
};