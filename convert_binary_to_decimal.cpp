#include<iostream>
#include<math.h>
using namespace std;

int Binary_to_Decimal(long num)
{
    int i = 0, decimal= 0;
   
    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(2,i);

        num /= 10;
        i++;
    }
    return decimal;
}

// main program
int main()
{

    long n ;
    cin>>n;
    cout << Binary_to_Decimal(n);   
    
    return 0;
}