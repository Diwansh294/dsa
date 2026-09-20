class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> k;
        
        for(int i=0;i<nums.size();i++){
            int comp=0;
            comp=target-nums[i];
            if(k.find(comp)!=k.end()){
                return{k[comp],i};
            }
           
                k[nums[i]]=i;
          

        }
        return {};
    }
};