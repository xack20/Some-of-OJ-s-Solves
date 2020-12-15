#include<bits/stdc++.h>
using namespace std;
bool gcd_one(int a, int b,int c)
{
    int d=a;
    if(b<d)d=b;
    else if(c<d)d=c;
    while(1)
    {
        if(d==1)break;
        if(a%d==0 && b%d==0 && c%d==0)return false;
        d--;
    }
    return true;
}
bool pythagorean_theorem(int a,int b,int c)
{
    if(a*a + b*b == c*c)return true;
    else if(b*b + c*c == a*a)return true;
    else if(c*c + a*a == b*b)return true;
    return false ;
}
int main()
{
    int a , b ,c;
    while(cin >> a >> b >> c)
    {

        if(gcd_one(a,b,c) && pythagorean_theorem(a,b,c))cout << "tripla pitagorica primitiva" <<endl;
        else if(pythagorean_theorem(a,b,c))cout << "tripla pitagorica" <<endl;
        else cout << "tripla" <<endl;
    }
    return 0;
}
