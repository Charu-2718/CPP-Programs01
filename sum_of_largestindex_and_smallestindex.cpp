#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
        
    }
    for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
            largest = arr[i];
            largestIndex = i;
        }
    }
    int sum=smallestIndex+largestIndex;
    cout<<sum;
    return 0;
}