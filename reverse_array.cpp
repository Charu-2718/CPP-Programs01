#include<iostream>
using namespace std;
void swap_it(int arr[],int size){
    int str=0;
    int end=size-1;
    
    while(str<=end){
       swap(arr[str],arr[end]);
       str++;
       end--;
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
    
    swap_it(arr,size);
    printing(arr,size);
    return 0;
}