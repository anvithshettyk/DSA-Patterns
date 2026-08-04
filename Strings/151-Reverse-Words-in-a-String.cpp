/*
    LeetCode 151 - Reverse Words in a String

    Pattern:
    String Manipulation

    Approach:
    - Reverse the entire string first.
    - Traverse through the reversed string and extract each word.
    - Reverse each extracted word to restore its original order.
    - Append each word to the answer string while ignoring extra spaces.

    Algorithm:
    1. Reverse the given string.
    2. Iterate through the string:
       - Skip leading spaces.
       - Extract characters until a space is found.
       - Reverse the extracted word.
       - Add the word to the result.
    3. Remove the extra space at the beginning of the answer.

    Example:
    Input:
    s = "the sky is blue"

    Output:
    "blue is sky the"

    Time Complexity:
    O(n)
    - Each character is processed a constant number of times.

    Space Complexity:
    O(n)
    - Extra space is used to store the result string.
*/
class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        reverse(s.begin(),s.end());
         string ans="";
        for(int i=0;i<n;i++){
         string word="";
         while(i < n && s[i] == ' '){
            i++;}
        
        while(i<n && s[i]!=' ')
            {
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0)
             ans+=' '+word;
        } 
        return ans.substr(1);
        }
        
    
};