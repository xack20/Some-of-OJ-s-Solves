#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        char A[1000][1000]= {"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
        if(a+b >=0 && a+b <=10)cout << A[a+b] << endl;
    }
    return 0;
}
