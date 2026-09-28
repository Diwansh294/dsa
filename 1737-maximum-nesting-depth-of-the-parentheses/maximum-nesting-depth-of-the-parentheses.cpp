class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                max1=max(count,max1);
            }
            else if(s[i]==')'){
                count--;
                
            }

    }
    return max1;
        
    }
};