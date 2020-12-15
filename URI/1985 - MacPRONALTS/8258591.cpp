#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double sum=0;
    cin >> t;
    int A[100000],B[100000];
    for(i=0;i<t;i++)cin >> A[i] >> B[i];
    for(i=0;i<t;i++){
        if(A[i]==1001)sum+=B[i]*1.5;
        else if(A[i]==1002)sum+=B[i]*2.5;
        else if(A[i]==1003)sum+=B[i]*3.5;
        else if(A[i]==1004)sum+=B[i]*4.5;
        else if(A[i]==1005)sum+=B[i]*5.5;
    }
    printf("%.2lf\n",sum);
    return 0;
}
