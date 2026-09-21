class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int ,int> ki;
        for(int i=0;i<nums.size();i++){
            if(ki.find(nums[i])!=ki.end()){
                if(i-ki[nums[i]]<=k){
                    return true;
                }
                
            }
            ki[nums[i]]=i;
        }
        return false;

    }
};