#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s,v1,v2;
    while(cin >> s >> v1 >> v2)
    {
        if(v1<=v2)cout << "impossivel" <<endl;
        else {
            double t;
            t=s/(v1-v2);
            printf("%.2lf\n",t);
        }
    }
    return 0;
}
