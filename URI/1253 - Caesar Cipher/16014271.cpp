#include<bits/stdc++.h>
using namespace std;

int main()
{
int t, n, i, j, k;
string s, z;

cin >> t;

for(i=0; i<t; i++)
{
    cin >> s >> n;

    for(j=0; j<s.size(); j++)
    {
        if(  (s[j] - n) < 'A'  )z.push_back( ('Z'- ('A'- (s[j] - n)))+1);
        else z.push_back((s[j] - n));
    }
    cout << z << endl;
    z.clear();

}
}
