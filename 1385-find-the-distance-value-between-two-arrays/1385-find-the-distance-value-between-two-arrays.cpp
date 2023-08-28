class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        for(auto i:arr1)
        {
            int exists=0;
            for(auto j:arr2)
            {
                if(abs(i-j)<=d)
                {
                    exists=1;
                    break;
                }
                
            }
            if(exists==0) ans++;
        }
        return ans;
    }
};