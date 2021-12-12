#include <bits/stdc++.h>
using namespace std;
 
int findingcandies(int arr[], int n, int sum)
{

    int curr_sum = arr[0], max_sum = 0, start = 0;
    
    for (int i = 1; i < n; i++) {

      
        if (curr_sum <= sum)
            max_sum = max(max_sum, curr_sum);
 
        while (start < i && curr_sum + arr[i] > sum) {
            curr_sum -= arr[start];
            start++;
        }

        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
 
        
        curr_sum += arr[i];
 
    }
 
    if (curr_sum <= sum)
        max_sum = max(max_sum, curr_sum);
 
    return max_sum;
}
 
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int sum = m;
    
    cout<<"first home : "<<arr[0]<<endl;
    cout<<"last home : "<<arr[n-1]<<endl;
 
    cout <<"Total candies : "<< findingcandies(arr, n, sum)<<endl;
 
    return 0;
}