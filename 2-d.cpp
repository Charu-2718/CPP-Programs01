//input output
//searching an element O(n)
//spiral order traversal
//transpose
//multiplication
//searching an element O(n*n)

//1.)input output
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n;
//     cin>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j];
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
//     return 0;
// }

//2
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     int n,m,k;
//     cin>>n;
//     cin>>m;
//     cin>>k;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     bool flag;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==k){
//                 flag=true;
//                 cout<<i<<"   "<<j<<endl;
//             }
//         }
//         }

//     if(flag==true){
//         cout<<'found';
//     }
//     else{
//         cout<<'not found';

//     }

//     return 0;
// }


//3


//4
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int m;
//     cin>>n;
//     cin>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0; j<m;j++){
//             cin>>a[i][j];
//         }
//     }
    
//     for(int i=0;i<n;i++){
//         for(int j=i; j<m;j++){
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j];
//             cout<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//5
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1;
//     int n2;
//     int n3;
//     cin>>n1;
//     cin>>n2;
//     cin>>n3;
//     int m1[n1][n2];
//     int m2[n2][n3];
//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0; j<n2;j++){
//             cin>>m1[i][j];
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0; j<n3;j++){
//             cin>>m2[i][j];
//         }
//     }    
    
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
            
//         }
//     }

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0; k<n2;k++){
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }
            
//         }
//     }

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<ans[i][j]<<" ";
            
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//6
