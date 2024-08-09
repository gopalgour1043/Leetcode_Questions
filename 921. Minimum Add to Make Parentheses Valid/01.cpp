#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int size = s.size();
            int count=0;
        for (int i = 0; i < size; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    st.pop();
                }
                else{
                    count++;
                }
            }
        }
        return st.size()+count;
    }
};