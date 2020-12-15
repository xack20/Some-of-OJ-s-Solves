#include<bits/stdc++.h>
using namespace std;

int prime_check(long long number)
{
    long long i,p=0;
    if(number == 0 || number == 1)return 0;
    for(i=2;i<=sqrt(number);i++)
    {
        if(number%i==0)return 0;
    }
    return 1;
}
int main()
{
    long long num;
    while(scanf("%lld",&num)!=EOF)
    {
        if(prime_check(num))
        {
            int temp;
            while(num)
            {
                temp=num%10;
                if(!prime_check(temp))break;
                num/=10;
            }
            if(!num)cout << "Super" <<endl;
            else cout << "Primo" << endl;

        }
        else cout << "Nada" <<endl;
    }
    return 0;
}
