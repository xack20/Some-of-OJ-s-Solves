#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, A[n],temp=0;
    for(i=0;i<n;i++)
    {
        cin >> A[i];
        if(A[i]>=temp)temp=A[i];
        else break;
    }
    if(i==n)i=-1;
    cout << i+1 << endl;
    return 0;
}
