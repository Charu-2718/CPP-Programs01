// #include<iostream>
// using namespace std;

// int main(){

//     int rows;
//     // Getting the number of rows.
//     cout << "Enter the Number of rows - ";
//     cin >> rows;

//     cout << "Triangle of " << rows << " using * -\n";

//     // Main logic to print triangle. 
//     for( int i = 0; i < rows; i++ ) {
//         for( int j = 0; j <= i; j++ ){
//             cout << "*  ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int rows,col;
//     // Getting the number of rows.
//     cout << "Enter the Number of rows - ";
//     cin >> rows;
//     cout << "Enter the Number of columns - ";
//     cin >> col;

//     for( int i = 0; i <= rows; i++ ) {
//         for( int j = 0; j <= col; j++ ){
//             cout << "*  ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){

//     int row=3;
    

//     for (int i= 1 ; i <= row ; i++){
//         for(int j = i; j<=row; j++ ){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
//     return 0;

// }
//Ques:
//    *
//   **
//  ***
// ****
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1 ; j<=row;j++){
//            int space=row-i;
//            if(j<=space){
//             cout<<" ";
//            }
//            else{
//             cout<<"*";
//            }
//         }
//         cout<<endl;    
//     }
    
//     return 0;

// }


// ques:

//     *
//    * *
//   * * *
//  * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1 ; j<=row;j++){
//            int space=row-i;
//            if(j<=space){
//             cout<<" ";
//            }
//            else{
//             cout<<"* ";
//            }
//         }
//         cout<<endl;    
//     }
    
//     return 0;

// }


// #include<iostream>

// using namespace std;

// int main() {

//   int rows, cols;
//   // Getting dimensions of rectangle.
//   cout << "Enter the number of rows in rectangle - ";
//   cin >> rows;

//   cout << "Enter the number of columns in rectangle - ";
//   cin >> cols;

//   cout << "Rectangle of dimensions " << rows << "*" << cols << endl;

//   // Main logic to print hollow rectangle. 
//   for (int i = 1; i <=rows; i++) {
//     for (int j = 1; j <= cols; j++) {

//       // If the index is at the border, then print *. 
//       if (i == 1 || i == rows || j == 1 || j == cols )
//         cout << "* ";
//       else
//         cout << "  ";
//     }
//     cout << endl;
//   }

//   return 0;
// }


// reverse the digit

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int revnum=0;
//     for(int i= num ; num>0 ; num=num/10){
//         revnum=revnum*10 + num%10;
//     }
//     cout<<revnum;
//     return 0;
// }


