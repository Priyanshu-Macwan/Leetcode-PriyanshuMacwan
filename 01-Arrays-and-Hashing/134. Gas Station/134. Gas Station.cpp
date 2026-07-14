1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int fuel=0;
5        int start=0;
6        int total_gas=0;
7
8    for(int i=0; i<gas.size(); i++)
9    {
10        total_gas+=gas[i];
11    }
12        
13        int total_cost=0;
14    for(int i=0; i<cost.size(); i++)
15    {
16        total_cost+=cost[i];
17    }
18
19    if(total_gas<total_cost)
20    {
21        return -1;
22    }
23
24    for(int i=0; i<gas.size(); i++)
25    {    
26        fuel+=gas[i]-cost[i];
27        if(fuel<0)
28        {
29          start = i + 1;
30          fuel=0;
31        }
32    }
33    return start;
34    }
35};