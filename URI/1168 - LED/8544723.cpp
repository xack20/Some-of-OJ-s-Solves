#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,leds=10,i;
    char A[10000];
    cin >> t;
    int B[]={6,2,5,5,4,5,6,3,7,6};
    while(t--)
    {
        leds=0;
        cin >> A;
        for(i=0;A[i]!='\0';i++)leds+=B[0+(A[i]-'0')];
            //cout <<  << endl;
        cout << leds << " leds" << endl;
    }

    return 0;
}
