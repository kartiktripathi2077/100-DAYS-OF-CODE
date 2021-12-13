/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int fo(int arr[],int n,int x)
{
    int low= n+1 , high = n-1;
    if (high >= low)
    {
    int mid = low + (high - low)/2;
    if(mid == 0 || arr[mid+1] == 0)
    {
    return n-mid;
    }
    else
    high=mid-1;

    }

}
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    int result=fo(a,n,x);
    cout<<result;
}
