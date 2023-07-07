class Solution {
public:
    void maxProfitFinder(vector<int>& prices, int i,int& minPrice, int& maxmProfit){
        // base case
        if(i==prices.size()) return;
        // just solve 1 case
        if(prices[i]<minPrice)  minPrice = prices[i];
        int todayProfit = prices[i]-minPrice;
        if(maxmProfit<todayProfit) maxmProfit = todayProfit;
        maxProfitFinder(prices,i+1,minPrice, maxmProfit);
    }
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxmProfit =INT_MIN;
        maxProfitFinder(prices,0,minPrice, maxmProfit);
        return maxmProfit;
    }
};