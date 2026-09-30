class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            result=nums[i]*nums[i];
            nums[i]=result;

        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};