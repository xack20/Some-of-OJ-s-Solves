#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if( s== "roraima" || s== "acre" || s== "para" || s == "rondonia" ||s=="tocantins" || s== "amapa" || s == "amazonas")
        printf("Regiao Norte\n");
    else printf("Outra regiao\n");
     return 0;
}