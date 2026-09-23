class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int max=0;
        for(auto x:accounts){
            int sum=0;
            for(auto s:x){
                sum=sum+s;

            }
            if(max<sum){
                max=sum;
            }
        }
        return max;
    }
};