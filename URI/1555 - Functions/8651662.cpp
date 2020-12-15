#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        int temp;
        temp = ((3*a)*(3*a))+(b*b);
        int i = 0;
        if(temp<((2*(a*a))+((5*b)*(5*b))))temp=(2*(a*a))+((5*b)*(5*b)),i++;
        if(temp<((-100*a)+(b*b*b)))temp=((-100*a)+(b*b*b)),i+=2;

        //cout << ((3*a)*(3*a))+(b*b) << " " << (2*(a*a))+((5*b)*(5*b)) << " " << ((-100*a)+(b*b*b)) <<endl;
        if(i==0)cout << "Rafael ganhou" <<endl;
        else if(i==1)cout << "Beto ganhou" <<endl;
        else cout << "Carlos ganhou" <<endl;
    }
    return 0;
}
