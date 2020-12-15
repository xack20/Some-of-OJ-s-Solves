#include<bits/stdc++.h>
using namespace std;
bool prime_check(long long number)
{
    long long i,p=0;
    if(number == 0 || number == 1)return false;
    for(i=2;i<=sqrt(number);i++)
    {
        if(number%i==0)return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(prime_check(a))cout << "Prime" <<endl;
        else cout << "Not Prime" <<endl;
    }
    return 0;
}
