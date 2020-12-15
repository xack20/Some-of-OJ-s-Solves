#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ; 
    
    while( scanf("%d",&t)!= EOF )
    {
        double ans = 20.0;
        while(t--)
        {
            double val ; scanf("%lf",&val);
            ans = min(ans,val);
        }
        
        printf("%.2lf\n",ans);
    }
    
    
    
    return 0;
}
