/*
Problem: 1903. Largest Odd Number in String

Primary Pattern: Strings
Secondary Pattern: Greedy / Reverse Traversal

Time Complexity: O(n)
Space Complexity: O(1)

Key Idea:
Traverse the string from right to left.
The first odd digit encountered marks the end of the
largest possible odd number.
Return the prefix ending at that index.
*/
class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        for(int i=n-1;i>=0;i--)
        {
          if ((num[i]-'0') % 2 == 1){
            return num.substr(0, i + 1);}
        }
        return "";
        
    }
};