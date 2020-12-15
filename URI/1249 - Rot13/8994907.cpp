#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;

    while(getline(cin , A)){
        int  s = A.size() , i;

        for(i=0;i<s;i++)
        {
            if((A[i]>='A' && A[i]<='Z') || (A[i] >='a' && A[i]<='z')){
                if((A[i]>='A' && A[i]<='M') || (A[i] >='a' && A[i]<='m'))A[i]+=13;
                else A[i]-=13;
            }
        }
        cout << A <<endl;

    }
    return 0;
}
