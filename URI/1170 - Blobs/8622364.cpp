#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        double a ;
        int ans=0;
        cin >> a;
        while(a)
        {
            if(a>1)ans++;
            a/=2.0;

        }

        cout << ans << " dias" <<endl;
    }
    return 0;
}
