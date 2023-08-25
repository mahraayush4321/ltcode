class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st;
        for(auto it:nums)
        {
            st.insert(it);
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            set<int>s;
            for(int j=i;j<nums.size();j++)
            {
                s.insert(nums[j]);
                if(st.size()==s.size())
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};