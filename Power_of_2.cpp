/* Check if a given number is power of 2 */

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0) return false;
        while(n>0)
        {
            n=(n&(n-1));
            if(n==0) return true;
            else return false;
        }
        
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

