#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(1)
    {
        getline(cin,s);
        if(s=="*")break;

        char ch = tolower(s[0]);
        int f = 1;
        for(int i  = 0 ; s[i] ; i ++)if(s[i]==' ' && tolower(s[i+1])!=ch){f=0;break;}
        cout << (f ? "Y": "N") <<endl;
    }

    return 0;
}
