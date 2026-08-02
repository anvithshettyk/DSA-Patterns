/*
Problem: 1021. Remove Outermost Parentheses

Primary Pattern: Strings
Secondary Pattern: Parentheses / Counter Simulation

Time Complexity: O(n)
Space Complexity: O(n)

Key Idea:
Maintain a counter representing the current nesting depth.

- For ')' decrease the counter before processing.
- For '(' increase the counter after processing.

Append characters only when the current depth is not zero,
thereby skipping the outermost parentheses of every primitive
valid parentheses string.
*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')')cnt--;
            if(cnt!=0)ans.push_back(s[i]);
            if(s[i]=='(')cnt++;
        }
        return ans;

        
    }
};