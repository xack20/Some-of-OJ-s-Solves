#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        unsigned long long int  m1=0,f=0,a , res=0,c=1;
        cin >> a;
        for(i=0;i<a;i++)
        {
            res+=c;
            c*=2;
        }

        cout << res/12000  << " kg" <<endl;
    }
    return 0;
}
