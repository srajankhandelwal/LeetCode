// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 
#define lli long long int
class Solution{
  public:
    // s : given string
    // return the expected answer
    
    int fun(string &s) {
        //code here
        lli a=0,ab=0,abc=0,m=1e9+7;
        lli i,n;
        n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[i]=='a')
            a=(2*a+1)%m;
            else if(s[i]=='b')
            {
                ab=(2*ab+a)%m;
            }
            else if(s[i]=='c')
            {
                abc=(2*abc+ab)%m;
            }
        }
        return abc;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends