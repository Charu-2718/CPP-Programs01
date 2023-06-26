#include<iostream>
#include<climits>
using namespace std;
int main(){

    //main array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //array where count will be stored
    int idx[100];
    int count=1;

   

    bool visited[n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
       idx[i]=count;
    }

bool flag=false;

for(int i = 0; i < n; i++) {  
        for(int j = i + 1; j < n; j++) {  
            if(idx[i] == idx[j])  {
                 flag=false;
                
            }
               
            else{
                flag=true;
                
            }  
        }  
}  
if(flag==false){
    cout<<"not unique";
}else{
     cout<<" unique";
}
return 0;
}