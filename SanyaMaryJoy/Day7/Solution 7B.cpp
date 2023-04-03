class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int i=0;
         int n=nums.size();
        for(int k=0;k<n;k++){
            if(nums[k]!=0){
                nums[i]=nums[k];
                i++;
            }
        }
        for(int l=i;l<n;l++){
            nums[l]=0;
        }
    }
};