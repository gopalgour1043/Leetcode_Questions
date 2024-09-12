class Solution {
public:
    int numSteps(string s) {
       
        int size = s.length();
        int op=0;
        int carry=0;
        for(int i=size-1;i>0;i--){
            if((s[i]+'0'+carry)%2==1){
                op+=1;
                carry=1;
            }
           op++;
        }
        return op+carry;
    }
};