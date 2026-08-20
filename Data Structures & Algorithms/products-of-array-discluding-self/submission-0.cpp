class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefix_prod(nums.size());
        int product=1;
        for(int i =0 ; i<nums.size(); i++)
        { 
            prefix_prod[i]=product;
            product=product*nums[i];
        } 
        vector<int> suffix_prod(nums.size());
        int product2=1;
        for(int i=nums.size()-1; i>=0;i--)
        { 
            suffix_prod[i]=product2;
            product2=product2*nums[i];
        } 

        vector<int> ans(nums.size());
        for(int i =0 ; i<nums.size(); i++)
        {
            ans[i] = prefix_prod[i] * suffix_prod[i];
        }

        return ans;

    }
};
