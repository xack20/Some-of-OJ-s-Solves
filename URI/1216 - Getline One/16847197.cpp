#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    double val ,sum= 0.0;
    string s;
    ll cnt = 0;
    while( getline(cin,s))
    {
        cin>> val;
        getchar();
        cnt++;
        sum+=val;
    }
    printf("%.1lf\n",(sum/cnt));
    return 0;
}
