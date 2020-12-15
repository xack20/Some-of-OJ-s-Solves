#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,l,c,h,ar;

    while(cin >> n >> h >> c >> l)
    {
        ar=sqrt(c*c+h*h);
        printf("%.4lf\n",(l*n*ar)/10000);
    }
    return 0;
}

