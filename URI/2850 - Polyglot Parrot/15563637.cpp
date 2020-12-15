#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    map < string , string > mpp = {{"esquerda","ingles"} , {"direita","frances"} ,{"nenhuma","portugues"},{"as duas","caiu"}};
    while(getline(cin,s))
    {
        cout << mpp[s] <<endl;
    }

    return 0;
}