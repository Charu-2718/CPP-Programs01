//to find the first repaeting element, whose index of first occurence is smallest 
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }

//     const int N= 100000;
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]=-1;
//     }
    
//     int minidx = INT_MAX;

//     for(int i=0;i<n;i++){
//         if(idx[a[i]] != -1){
//             minidx=min(minidx,idx[a[i]]);
//         }
//         else{
//             idx[a[i]] =i;
//         }

//     }
//     if(minidx==INT_MAX){
//         cout<< "-1";

//     }
//     else{
//         //cout<<minidx;//starting from 0
//         cout<<minidx+1;
//     }

//     return 0;
// }


//find cont. subarray which adds to a given number s.
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     int s;
//     cin >> s;
//     for(int i =0; i<n;i++){
//         cin>>a[i];
        
//     }
//     int i=0, j=0 ;//iterators
//     int st=-1, en=-1;//answers
//     int sum=0;
//     // while(j<n && sum+a[j]<=s){
//     //    sum+=a[j];
//     //    j++;
       
//     // }
     
//     // if(sum==s) {
//     //     cout<<i+1<< "      "<<j<<endl;
//     //     return 0;
//     // }

//     while(j<n){
//         sum+=a[j];
//         while(sum>s){
//             sum-=a[i];
//             i++;
//         }
//         if(sum==s){
//             st=i+1;
//             en=j+1;
//             break;
//         }
//         j++;
//     }
//     cout<<st<< "      "<<en<<endl;
//     return 0;
// }

//smallest positive missing number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
    
//     }
//     const int N= 100000;
//     bool idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         if (a[i]>=0){
//             idx[a[i]]=1;
//         }
        
//     }
//     int ans=-1;
//     for(int i=0;i<N;i++){
//         if(idx[a[i]]==0){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }


//to find all possible subarray
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n ;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<a[k]<<"     ";
//                     cout<<endl;

//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }



//maximum subarray sum
//kadanes algo
// #include <iostream>
// #include<climits>
// using namespace std;
// int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
//     int currentSum=0;
//     int max_sum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentSum+=a[i];
//         if(currentSum<0){
//             currentSum=0;
//         }
//         max_sum=max(max_sum,currentSum);

//     }
//     cout<<max_sum;
//     return 0;
// }

//Maximum cirrcular subarray sum
// #include<iostream>

// #include<climits>

// using namespace std;

// int kidane(int arr[], int n){
//     int currentsum=0;
//     int max_sum=INT_MIN;
//     for (int i = 0 ; i <n ; i++) {
//         currentsum+=arr[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         max_sum=max(max_sum,currentsum);
//     }
//     return max_sum;
    
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int wrapsum;
//     int nonwrapsum=kidane(a,n);
//     int totalsum=0;
//     for(int i=0; i<n; i++){
//         totalsum+=a[i];
//         a[i]=-a[i];

//     }
//     wrapsum=totalsum+kidane(a,n);
//     cout<<max(wrapsum,nonwrapsum);
//     return 0;
// }
//Pair sum problem
//two elements in array have sum equal to the given k
// #include<iostream>

// #include<climits>
// using namespace std;
// bool pairsum(int a[], int n, int k){
//     int str=0, end=n-1;
    
//     while(str<end){
//         if(a[str]+a[end]==k){
//             cout<<str<<"         "<<end<< endl;
//             return true;
//         }
//         else if(a[str]+a[end]>k){
//             end--;
//         }
//         else if(a[str]+a[end]<k){
//             str++;
//         }
//     }
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int k;
//     cin>>k;

//     cout<<pairsum(a,n,k)<<endl;

//     return 0;
// }