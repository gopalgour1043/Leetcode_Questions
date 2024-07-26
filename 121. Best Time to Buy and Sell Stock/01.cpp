#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int profit=0;
        int mini=prices[0];
        int ans=0;
        for(int i=0;i<size;i++){
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
            ans=max(ans,profit);
        }
        return ans;
       
    }
};
