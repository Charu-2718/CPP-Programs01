#include<iostream>
using namespace std;
void swap_alt(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }

    }
}
void printing(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }   
    
    swap_alt(arr,size);
    printing(arr,size);
    return 0;
}