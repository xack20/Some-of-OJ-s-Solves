#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        int a,b;
        char ch; ; cin >>a>>ch>>b;
        if(a==b)cout<<a*b <<endl;
        else if(islower(ch))cout << a+b<<endl;
        else cout << b-a <<endl;
    }

    return 0;
}
