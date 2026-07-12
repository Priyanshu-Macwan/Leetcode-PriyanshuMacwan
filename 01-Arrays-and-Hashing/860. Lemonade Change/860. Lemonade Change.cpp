1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) {
4        int five=0;
5        int ten=0;
6        int count=0;
7        for(int i=0;i<bills.size(); i++)
8        {   count++;
9            if(bills[i]==5)
10            {
11                five++;
12            }  
13             else if(bills[i]==10 && five!=0)
14            {  
15               five--;
16               ten++;
17            }
18            else if(bills[i]==20 )
19            {
20               if(ten > 0 && five > 0)
21                   {
22                          ten--;
23                          five--;
24                    }
25               else if(five >= 3)
26                     {
27                           five -= 3;
28                     }
29               else
30                       {
31                          return false;
32                        }
33            }else
34            {
35                return false;
36            }
37        }
38      
39        return true;
40    }
41};