class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k=0;
        vector<int> nums1;
        for(int i=0;i<nums.size();i++){
            int result=0;
            if(nums[i]<0){
                result=nums[i]*nums[i];
                nums[i]=result;
                nums1.push_back(nums[i]);
            }
            else{
                result=nums[i]*nums[i];
                nums[i]=result;
                nums[k]=nums[i];
                k++;
            }
        }
         vector<int> ans;
        int i=0;
        int j=nums1.size()-1;

              while (i < k && j >= 0) {

            if (nums[i] < nums1[j]) {
                ans.push_back(nums[i]);
                i++;
            }
            else {
                ans.push_back(nums1[j]);
                j--;
            }
        }

        while (i < k) {
            ans.push_back(nums[i]);
            i++;
        }

        while (j >= 0) {
            ans.push_back(nums1[j]);
            j--;
        }

        return ans;
    }
};
 