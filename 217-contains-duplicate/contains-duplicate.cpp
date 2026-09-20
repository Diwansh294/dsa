class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>k;
        for(int i=0;i<nums.size();i++){
            if(k.find(nums[i])!=k.end()){
                return true;
            }
            k[nums[i]]=i;
        }
        return false;
    }
};