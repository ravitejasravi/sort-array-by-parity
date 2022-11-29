class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int j = 0;

        if(nums.size() == 1)
            return nums;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] % 2 == 0 && nums[j] % 2 != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }

            if(nums[j] % 2 == 0)
                j++;
        }
        
        return nums;
    }
};