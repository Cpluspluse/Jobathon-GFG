//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends




class Solution
{
public:
 int GetMax(int n, int k, vector<string> s) 
  { 
      int dp[(1<<10)]={0}; 
        dp[0]=1; 
   
  for(int i=0;i<n;i++){ 
      string p=s[i]; 
      int m=0; 
      for(int j=0;j<p.size();j++){ 
          int x=p[j]-'a'; 
          m|=(1<<x); 
      } 
      for(int j=(1<<10)-1;j>=0;j--){ 
        if(dp[j]>0){ 
             int temp=1+dp[j]; 
             dp[m|j]=max(dp[m|j],temp); 
        } 
      } 
  } 
  int ans=0; 
  for(int i=0;i<(1<<10);i++){ 
       
      int p=__builtin_popcount(i); 
      if(p==k) ans=max(ans,dp[i]-1); 
       
  } 
  return ans; 
  }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<string> str(n);
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        Solution obj;
        cout<<obj.GetMax(n,k,str)<<endl;
    }
}
// } Driver Code Ends
