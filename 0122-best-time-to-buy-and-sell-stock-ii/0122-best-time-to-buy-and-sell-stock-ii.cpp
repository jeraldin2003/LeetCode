class Solution {                        //iterate over prices[i] compare i and i-1 when i > i-1 profit = profit+ i + i-1;
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        for(int i=1;i<n;i++){         //dont overcomplicate things 
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
        }
    return profit;    }
};