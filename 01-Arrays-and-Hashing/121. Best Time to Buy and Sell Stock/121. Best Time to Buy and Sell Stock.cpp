1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int least=INT_MAX;
5        int maxi=INT_MIN;
6      
7      for(int i=0; i<prices.size(); i++)
8      {
9          least=min(least,prices[i]);
10          maxi=max(maxi,prices[i]-least);
11      }
12      return maxi;
13    }
14};