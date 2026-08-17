class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int temp;

        for(int i = n-1 ;i >= 0 ;i--){

            if(nums[i] == 0){
                int j = i;
                while(j != n-1){
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j + 1] = temp;
                    j++;
                }

            }

        }
        
        
    }
};