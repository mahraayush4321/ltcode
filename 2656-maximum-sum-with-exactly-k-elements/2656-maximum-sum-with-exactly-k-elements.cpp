class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        int maxele=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxele){
                maxele=nums[i];
            }
        }
        for(int i=1;i<=k;i++)
        {
            sum+=maxele;
            maxele++;
        }
        return sum;
    }
};