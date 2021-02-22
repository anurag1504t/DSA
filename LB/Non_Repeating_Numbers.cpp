/*
  Non Repeating Numbers
*/

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> ans(2);
        int xor_nums = 0;
        for(int i=0;i<nums.size();i++)
        {
            xor_nums^=nums[i];
        }
        int rightmost_setbit = xor_nums&(~(xor_nums-1));
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&rightmost_setbit)
            {
                ans[0]^=nums[i];
            }
            else
            {
                ans[1]^=nums[i];
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;++i)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2])
        {
            ans.push_back(nums[nums.size()-1]);
        }
        return ans;
    }
};
