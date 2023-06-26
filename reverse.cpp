#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ans=0;
    while(num!=0){
        int digit=num%10;
        if(ans>INT_MAX/10 || ans<INT_MIN){
            return 0;
        }
        ans=ans*10+digit;
        num=num/10;  
    }
    cout<<ans;
    return 0;
}