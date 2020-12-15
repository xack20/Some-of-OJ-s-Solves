#include<bits/stdc++.h>
using namespace std;
int main()
{

        long long a, b,sum=0,temp;
        cin >> a >> b;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        a--;
        cout << (((b*(b+1))/2) - ((a*(a+1))/2)) <<endl;

    return 0;
}
