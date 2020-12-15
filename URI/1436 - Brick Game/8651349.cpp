#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int A[n];
        int i;
        for(i=0;i<n;i++)cin >> A[i];
        sort(A,A+n);
        printf("Case %d: %d\n",j,A[(n/2)]);
        j++;
    }
    return 0;
}
