#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(string &s){
        char temp=s[0];
        for(int i=0;i<s.length()-1;i++){
            s[i]=s[i+1];
        }
        s[s.length()-1]=temp;
    }
    bool rotateString(string s, string goal) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s==goal) return true;
            rotate(s);
        }
        return false;
    }
};
