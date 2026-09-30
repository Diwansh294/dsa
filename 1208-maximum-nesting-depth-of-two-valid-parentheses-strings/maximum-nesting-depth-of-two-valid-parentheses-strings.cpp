class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth=0;
        vector<int>result(seq.size());
        for(int i=0;i<seq.size();i++){
            if(seq[i]=='('){
                depth++;
                if(depth%2==0){
                    result[i]=0;
                }
                else{
                    result[i]=1;
                }}
                else{
                    if(depth%2==0){
                        result[i]=0;
                    }
                    else{
                         result[i]=1;
                    }
                    depth--;
                }
            
        }
        return result;
    }
};