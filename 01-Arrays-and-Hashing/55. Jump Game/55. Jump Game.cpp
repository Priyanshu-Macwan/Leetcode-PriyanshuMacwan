1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int reach = 0;
5
6        for(int i = 0; i < nums.size(); i++)
7        {
8            if(i > reach)
9            {
10                return false;
11            }
12            reach = max(reach, i + nums[i]);
13
14            if(reach >= nums.size() - 1)
15            {
16                return true;
17            }
18        }
19        return false;
20    }
21};