#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,i,sum=1;;
        cin >> a;
        for(i=0;i<=a;i++)sum+=i;
        cout << sum << endl;
    }
    return 0;
}
