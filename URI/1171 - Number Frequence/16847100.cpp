#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;cin >> t;
    map < int , int > mp;
    while(t--){int a; cin >> a;mp[a]++;}
    for(auto a : mp)printf("%d aparece %d vez(es)\n",a.first,a.second);

    return 0;
}
