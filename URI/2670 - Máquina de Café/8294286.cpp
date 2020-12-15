#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans;
    cin >> a >> b >> c;
    ans = 4*a + 2*b;
    if((2*a+2*c)<ans)ans=2*a+2*c;
    if((4*c + 2*b)<ans)ans=2*b+4*c;
    cout  << ans <<endl;
    return 0;
}
