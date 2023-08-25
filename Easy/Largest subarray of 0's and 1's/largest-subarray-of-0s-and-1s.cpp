//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        // Your code here
        unordered_map<int,int>map;

        int res=0;

        int ones=0;

        int zeros=0;

        for(int i=0;i<n;i++)

        {

        if(arr[i]==0)

        zeros++;

        else 

        ones++;
         int diff=ones-zeros;
         if(diff==0)
         {
            res=i+1;
         }
          if(map.find(diff)==map.end()){
            map.insert({diff,i});
          }
          if(map.find(diff)!=map.end())
          {
            res=max(res,i-map[diff]);
          }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends