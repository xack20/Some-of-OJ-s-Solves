#include<bits/stdc++.h>
using namespace std;

int main()
{
    int e,d;
    cin >> e >> d;

    if( e <= (d - 3) ){cout << "Muito bem! Apresenta antes do Natal!" << endl;}
    else
    {
        if(e <= d && d < 23 )
        {
            cout << "Parece o trabalho do meu filho!" << endl;
            cout << "TCC Apresentado!" << endl;
        }
        else if( e <= d)
        {
            cout << "Parece o trabalho do meu filho!" << endl;
            cout << "Fail! Entao eh nataaaaal!" << endl;
        }
        else cout << "Eu odeio a professora!" <<endl;
    }

    //main();

    return 0;
}
