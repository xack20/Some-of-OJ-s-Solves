#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,sum=0;
    long long A[20];
    A[2]=1;
    A[1]=0;
    A[0]=0;
    for(i=3;i<20;i++)
    {
        if(i%2==0)A[i]=A[i-1]*A[i-2];
        else A[i]=A[i-1]+A[i-2];
    }
    while(cin >> a)cout << A[a] << endl;
    return 0;
}

