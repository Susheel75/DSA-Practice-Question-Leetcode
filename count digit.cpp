
// digit count of any number

#include<iostream>
using namespace std;
int countDigit(long long n)
{
    int res=0;
    while(n>0)
    {
        n=n/10;
        res++;
    }
    return res;
}
int main()
{
    long long n;
    cin>>n;
    cout<<"Number of digit: "<<countDigit(n);
    return 0;
}

