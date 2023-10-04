/*check for maximum integer in a array */
#include<iostream>
using namespace std;
int maximum (int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cout<<"ENETER NUMBER OF ELEMENTS IN ARRAY ::"<<endl;
    cin>>size;
    int arr[size];
     for(int i=0;i<size;i++)
       cin>>arr[i];
    cout<<"MAXIMUM INTEGER IN ARRAY IS "<<maximum(arr,size)<<endl;
}