1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4        
5        vector<int> prefix_gcd(nums.size());
6        prefix_gcd[0]=nums[0];
7         int maximum=nums[0];
8        for(int i=1; i<nums.size(); i++)
9        {   
10            maximum=max(maximum,nums[i]);
11            prefix_gcd[i]=gcd(nums[i],maximum);
12        }
13
14        sort(prefix_gcd.begin(),prefix_gcd.end());
15        int i=0;
16        int j=nums.size()-1;
17        long long total=0;
18        while(j>i)
19        {
20           total+=gcd(prefix_gcd[i],prefix_gcd[j]);
21           i++;
22           j--;
23        }
24        return total;
25    }
26};