//no of elements are 2m+1
#include<iostream>
using namespace std;
int find_unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
         ans=ans^arr[i];
    }
    return ans;
    
}
// void printing(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }   
    
    cout<<find_unique(arr,size);
    //printing(arr,size);
    return 0;
}