#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,minute;
    while(1)
    {
        cin >> h1 >> m1 >> h2 >> m2 ;
        if (h1==0 && m1 ==0 && m2 ==0 && h2==0)return 0;


        if(m1>m2)
        {
            m2+=60;
            m1=m2-m1;
            h2--;
            if(h1>h2){
                    h2+=24;
                    h1=h2-h1;
            }
            else h1=h2-h1;
            minute=h1*60 + m1;
        }
        else{
            m1=m2-m1;
            if(h1>h2){
                    h2+=24;
                    h1=h2-h1;
            }
            else h1=h2-h1;
            minute=h1*60 + m1;
        }
        cout << minute << endl;

    }
    return 0;
}
