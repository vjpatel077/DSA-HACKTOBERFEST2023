#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cout<<"Enter number of test cases::"<<endl;
    cin>>test;
    while(test--){
    int n,k;
    cout<<"Enter num::"<<endl;                 // implementation with left shift operator
    cin>>n;
    cout<<"Enter position to check ::"<<endl;
    cin>>k;
   if(n&(1<<(k-1)!=0)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;


    /*method 2
implementation with right shift operator

if((n>>(k-1))&1==1) cout<<"yes"<<endl;
else cout<<"no"<<endl;     
           */
    }

}
