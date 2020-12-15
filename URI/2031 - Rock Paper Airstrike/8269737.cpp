#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char A[100];
        char B[100];
        cin >> A ;
        cin >> B ;
        if(strcmp(A,"ataque")==0 || strcmp(B,"ataque")==0)
        {
            if(strcmp(A,"ataque")==0 && strcmp(B,"ataque")==0)cout << "Aniquilacao mutua\n";
            else if (strcmp(A,"ataque")==0)cout << "Jogador 1 venceu\n";
            else cout << "Jogador 2 venceu\n";
        }
        else if(strcmp(A,"pedra")==0 || strcmp(B,"pedra")==0 )
        {
            if(strcmp(A,"pedra")==0 && strcmp(B,"pedra")==0)cout << "Sem ganhador\n";
            else if (strcmp(A,"pedra")==0)cout << "Jogador 1 venceu\n";
            else cout << "Jogador 2 venceu\n";
        }
        else
            if(strcmp(A,"papel")==0 && strcmp(B,"papel")==0)cout << "Ambos venceram\n";
    }
    return 0;
}
