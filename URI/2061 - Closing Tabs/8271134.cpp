#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tabs,actions;
    cin >> tabs >> actions ;

    char A[100];
    while(actions--)
    {
        cin >> A;
        if(strcmp(A,"fechou")==0)tabs++;
        if(strcmp(A,"clicou")==0)tabs--;
    }
    if(tabs<0)tabs=0;
    cout << tabs << endl;
    return 0;
}
