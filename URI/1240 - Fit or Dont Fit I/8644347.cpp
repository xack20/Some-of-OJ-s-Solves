#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
     int a , b;
     cin >> a >> b;
     while(b)
     {
         if(a%10 != b%10)break;
         a/=10,b/=10;
     }
     if(b)cout << "nao encaixa" <<endl;
     else cout << "encaixa" <<endl;
    }
    return 0;
}
