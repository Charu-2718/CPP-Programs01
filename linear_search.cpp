#include<iostream>
using namespace std;

bool search(int a[],int n, int k){
    for(int i=0;i<n; i++){
        if(a[i]==k){
            return 1;
        }
   
}
 return 0;
}

int main(){
    cout<<"Enter the array:"<<endl;
    int size;
    cin>>size;
    int arr[1000];
    cout<<"Enter the key:"<<endl;
    int key;
    cin>>key;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool found=search(arr,size,key);
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    
    return 0;
}