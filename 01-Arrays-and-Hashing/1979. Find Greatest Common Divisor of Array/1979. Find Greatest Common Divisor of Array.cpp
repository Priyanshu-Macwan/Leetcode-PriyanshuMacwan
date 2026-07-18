1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int big=INT_MIN;
5        int small=INT_MAX;
6
7        for(int i=0 ; i<nums.size(); i++)
8        {
9            big= max(nums[i],big);
10            small=min(nums[i],small);
11        }
12
13        return gcd(big,small);
14    }
15};