#include <bits/stdc++.h>

using namespace std;

int main() {

    long long a,c=0,temp=0;
    while(1)
    {
        if(scanf("%lld",&a) == EOF )break;

        if(a>temp && c==0)temp=a;
        else c++;
    }
    cout << ++temp <<endl;
    return 0;
}
