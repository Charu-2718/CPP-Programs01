#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_num=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_num=max(max_num,arr[i]);
    }
    cout<<max_num;
    
    return 0;
}