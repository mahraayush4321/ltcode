class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0,l=0,cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                r++;
            }else
            {
                l++;
            }
            if(l==r)
            {
                cnt++;
            }
        }
        return cnt;
    }
};