#include<bits/stdc++.h>
using namespace std;
int ping(char a)
{
    if(a=='A' || a== 'a')return 10;
    else if(a=='B' || a== 'b')return 11;
    else if(a=='C' || a== 'c')return 12;
    else if(a=='D' || a == 'd')return 13;
    else if(a=='E' || a== 'e')return 14;
    else if(a=='F' || a== 'f') return 15;
}
int main()
{
    char A[10000];
    while(1)
    {
        cin >> A;
        if(atoi(A)<0)break;

        if(A[0]=='0' && A[1]=='x')
        {
            int i,j,sum=0,num;
            for(i=2,j=0;A[i];i++,j++)A[j]=A[i];
            A[i-2]='\0';
            for(i=0,j=strlen(A)-1;A[i];i++,j--)
            {
                if(A[i]>='0' && A[i]<='9')num = 0+(A[i]-'0');
                else num=ping(A[i]);

                sum +=pow(16,j)*num;
            }
            cout << sum <<endl;

        }
        else printf("0x%X\n",atoi(A));
    }
    return 0;
}
