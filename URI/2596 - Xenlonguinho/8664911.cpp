#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,i,j,c,d=0;
        cin >> a;
        for(i=1;i<=a;i++){
            c=0;
            for(j=1;j<=i;j++)if(i%j==0)c++;
            if(c%2!=0)d++;
        }
        i--;
        cout << i-d <<endl;
    }
    return 0;
}
