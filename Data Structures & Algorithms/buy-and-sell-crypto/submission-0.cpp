class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //two pointers while loop l<r 
        int l = 0;
        int r = 1;
        int maxP = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int p = prices[r]-prices[l];
                maxP = max(maxP, p);
            }
            else{
                l = r;
            }
            r++;
        }
        return maxP;
    }
};
