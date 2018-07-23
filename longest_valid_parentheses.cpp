/*
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

Example 1:

Input: "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()"

Example 2:

Input: ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()"



*/

class Solution {
public:
    int longestValidParentheses(string s) {
        int ll=s.length();
        stack <int> l;
        l.push(-1);
        int max_len=0;
        int new_len=0;
        for (int i=0; i<ll; i++){
            
            if (s[i]=='(')
            {
                l.push(i);
            }
            else{
                l.pop();
                if (!l.empty()){
                new_len=i-l.top();
                    if (max_len<new_len) max_len=new_len;
                }
                else{
                    
                    l.push(i);
                }
                
            }
        }
        return max_len;
    }
};

		
