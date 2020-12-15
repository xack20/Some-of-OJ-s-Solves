#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(n==0)break;
        int a=0, b=0;
        int d;

        while(n--)
        {
            cin >> d;
            if(d)a++;
            else b++;
        }
        printf("Mary won %d times and John won %d times\n",b,a);
    }
    return 0;
}
