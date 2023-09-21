//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
  public:
  long long CountB(int n, int k)
  {
    long long a = n;
    long long totalEdges = (k - 1) * a + 1;
    return totalEdges + 1 - a;
  }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Solution obj;
        int n,k;
        cin>>n>>k;
        cout<<obj.CountB(n,k)<<endl;
    }
}
// } Driver Code Ends
