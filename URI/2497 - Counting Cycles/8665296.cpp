#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,i=0;
    while(1)
    {
        cin >> a;
        if(a==-1)return 0;
        printf("Experiment %.0lf: %.0lf full cycle(s)\n",++i,floor(a/2));
    }
}
