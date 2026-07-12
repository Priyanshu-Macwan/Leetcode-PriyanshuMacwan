1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4       vector<int> temp = arr;
5
6        sort(temp.begin(), temp.end());
7
8        unordered_map<int,int> mp;
9
10        int rank = 1;
11
12        for(int x : temp)
13        {
14            if(mp.find(x) == mp.end())
15            {
16                mp[x] = rank;
17                rank++;
18            }
19        }
20
21        for(int i=0;i<arr.size();i++)
22        {
23            arr[i] = mp[arr[i]];
24        }
25
26        return arr;
27
28    }
29};