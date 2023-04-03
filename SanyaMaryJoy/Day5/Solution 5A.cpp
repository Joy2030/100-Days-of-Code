class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>::iterator a=nums.begin();
        vector<int>::iterator b=nums.end();
        sort(a,b);
            return nums[n/2];
    }
};