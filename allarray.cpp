
//Basic declaration intilialization of ARRAY

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array numbers:"<<endl;
//     for(int i=0; i<n ; i++){
//         cin>>arr[i];
//     }
//     cout<<"The array numbers are :"<<endl;
//     for(int i=0; i<n ; i++){
//         cout<<arr[i]<<"   ";
//     }
//     return 0;
// }



//To find max and min element from an array given by user
// #include<iostream>
// #include<climits>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int maxno=INT_MIN;
//     int minno=INT_MAX;
//     cout<<"Enter the array numbers:"<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"The array numbers is : "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
    
//     for(int i=0; i<n; i++){
//         maxno=max(maxno,arr[i]);
//         minno=min(minno,arr[i]);
//     }
//     cout<<"The maximum number is: "<<maxno<<endl;
//     cout<<"The minimum number is: "<<minno<<endl;
//     return 0;
// }


//Implementing linear search in arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the numbers of array: "<<endl;
//     for(int i=0; i<n ; i++){
//         cin>>arr[i];
//     }
//     cout<<"The numbers of array are: "<<endl;
//     for(int i=0; i<n ; i++){
//         cout<<arr[i]<<"  ";
//     }
//     int index=-1,key;
//     cin>>key;
//     cout<<"The number to search in array: "<<key<<endl;
//     for(int i=0;i<n;i++){
//         if(key==arr[i]){
//             index=i;
//             break;
//         }
        
//     }
//     if(index!=-1){
//         cout<<"the elemnet is found at index: "<<index<< endl;
//     }
//     else{
//         cout<<"Element not found";
//     }
    
//     return 0;
// }

//To implement binary search in array
// #include<iostream>
// using namespace std;
// int binary_search(int arr[],int n, int key){
//     int start=0,end=n;
    
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
        
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
//     }
//     return -1;

// }
// int main(){
//     int n,key;
//     cout<<"no. of elemnets in array : ";
//     cin>>n;
//     cout<<"the key is : ";
//     cin>>key;
//     int arr[n];
//     cout<<"Enter the numbers of array: "<<endl;
//     for(int i=0; i<n ; i++){
//         cin>>arr[i];
//     }

//     cout<<binary_search(arr,n,key);
//     return 0;
// }


//To implement selection sort 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i< n ; i++){
//         cin>>arr[i];
//     } 
//     for (int i=0; i < n-1; i++)
//     {
//         for (int j =i+ 1; j <n; j++)
//         {
//             if (arr[j] < arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }   
//     for(int i=0; i< n ; i++){
//         cout<<arr[i]<<"     ";
//     } 
//     return 0;
// }
// In descending order
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i< n ; i++){
//         cin>>arr[i];
//     } 
//     for (int i=0; i < n-1; i++)
//     {
//         for (int j =i+ 1; j <n; j++)
//         {
//             if (arr[j] > arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }   
//     for(int i=0; i< n ; i++){
//         cout<<arr[i]<<"     ";
//     } 
//     return 0;
// }


// Efficient C++ program to find maximum
// number of chocolates   time and space complexity is O(1)
// #include <iostream>
// using namespace std;

// // Returns maximum number of chocolates we can eat
// // with given money, price of chocolate and number
// // of wrapprices required to get a chocolate.
// int countMaxChoco(int money, int price, int wrap)
// {
// 	// Corner case
// 	if (money < price)
// 	return 0;

// 	// First find number of chocolates that
// 	// can be purchased with the given amount
// 	int choc = money / price;

// 	// Now just add number of chocolates with the
// 	// chocolates gained by wrapprices
// 	choc = choc + (choc - 1) / (wrap - 1);
// 	return choc;
// }

// // Driver code
// int main()
// {
// 	int money = 15 ; // total money
// 	int price = 1; // cost of each candy
// 	int wrap = 3 ; // no of wrappers needs to be
// 	// exchanged for one chocolate.

// 	cout << countMaxChoco(money, price, wrap);
// 	return 0;
// }


//bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1; i<n-1;i++){
//         for (int j = 0; j < n-i; j++)
//         {
//             if (arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
        
//     }
//     for(int i=0 ;i<n;i++){
//         cout<<arr[i]<<"   ";
//     }
// }

// //insertion sort

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=1; i<n;i++){
//         int current= arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>current){
//             arr[j+1]=arr[j];
//             j--;

//         }
//         arr[j+1]=current;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
// }
//fastest horse problem



//For every i from 0 to n-1 output the maximum
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     for(int j=0;j<n;j++){
//         mx=max(mx,arr[j]);
//         cout << "The maximum for "<< j <<" is : "<< mx <<  endl;
//     }
//     return 0;
// }



//Sub array and subsequence 
// all subaarays are subsequence but not all subsequence are subarrays
//SUBAARAY    continous part of array
//no. of subarrays of array size n is : nC2 +n
//SUBSEQUENCE : no. of subsequence = 2^n


//Output sum of each subarray of the given array.
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int curr=0;
//     for(int i=0 ; i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         curr=0;
//         for(int j=i;j<n;j++){
//             curr=curr+arr[j];
//             cout << curr << endl;
//         }

//     }
//     return 0;
// }

//longest arithematic array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int ans=2;
//     int pd=a[1]-a[0];
//     int j=2;
//     int curr=2;
//     while(j<n){
//         if(pd==a[j]-a[j-1]){
//             curr++;
//         }
//         else{
//             pd= a[j]- a[j-1];
//             curr=2;
//         }
//         ans=max(ans,curr);
//         j++;
//     }
//     cout<< ans;
// }



