class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        
        string k;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(count>0){
                     
 k.push_back(s[i]);
                }
              count++;
               
            }
            else{
                count--;
              
                if(count>0){
                  k.push_back(s[i]);

                }
            }

        }
        return k;
    }
};