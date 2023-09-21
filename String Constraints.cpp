//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
  public:
  int CountStrings(string s)
  {
     vector<vector<int>> idx(10);
    int n = s.size();
    int cnt = 0;
    vector<int> last(10, -1);

    for (int i = 0; i < n; i++) {
        int curr = s[i] - '0';
        idx[curr].push_back(i);
        last[curr] = i;

        for (int j = 2; j < 10; j++) {
            if (last[j] == -1) continue;
            int end = last[j];
            int start = 0;

            for (int k = 1; k < 10; k++) {
                if (k <= j) {
                    int req = j;
                    int size = idx[k].size();
                    if (req <= size) {
                        start = max(start, idx[k][size - req] + 1);
                    }
                } else {
                    start = max(start, last[k] + 1);
                }
            }

            cnt += max(0, end - start + 1);
        }
    }
    return cnt;
  }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.CountStrings(s)<<endl;
    }
}
// } Driver Code Ends
