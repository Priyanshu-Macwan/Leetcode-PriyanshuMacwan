1class Solution {
2public:
3
4     static bool cmp(string a, string b)
5      {
6        return a+b>b+a;
7      }
8    string largestNumber(vector<int>& nums) {
9       
10       vector<string> arr;
11
12       for(int c:nums)
13       {
14           arr.push_back(to_string(c));
15       }
16
17       sort(arr.begin(),arr.end(),cmp);
18       if(arr[0]==0)
19       {
20        return 0;
21       }
22
23       string result=;
24
25       for(string s:arr)
26       {
27          result+=s;
28       }
29       return result;
30    }
31};