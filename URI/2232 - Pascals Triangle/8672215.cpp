#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long sum=0;
        int a,i;
        cin >> a;
        for(i=1;i<=a;i++)sum+=pow(2,i-1);
        cout << sum << endl;
    }
    return 0;
}
