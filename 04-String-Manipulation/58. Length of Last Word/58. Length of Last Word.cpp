1class Solution {
2public:
3
4    int lengthOfLastWord(string s) {
5     
6      
7        int i=s.size()-1;
8        while(i>=0 && s[i]==' ')
9        {
10            i--;
11        }
12        int count=0;
13       
14        while(i>=0 && s[i] != ' ')
15        {  
16                i--;
17                count++;
18        }
19    
20        return count;
21    }
22};