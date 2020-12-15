#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    printf("%.1lf\n",(pow(((1+sqrt(5.0))/2),n)-pow(((1-sqrt(5.0))/2),n))/sqrt(5.0));
    return 0;
}
