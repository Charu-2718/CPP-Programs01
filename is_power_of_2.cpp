#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(ceil(log2(num))==floor(log2(num))){
        cout<<"Is power off 2"<<endl;
    }
    else{
        cout<<"Is not power off 2"<<endl;
    }

    return 0;
}