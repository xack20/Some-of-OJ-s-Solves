#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=15,a,p,q,i=0,j=0;
    int odd[5];
    int even[5];
    while(t--){
        cin >> a;
        if(a%2==0){
            even[i]=a;
            i++;
        }
        if(a%2!=0){
            odd[j]=a;
            j++;
        }
        if(i==5){
                for(p=0;p<5;p++)printf("par[%d] = %d\n",p,even[p]);
        i=0;
        }
        if(j==5){
                for(q=0;q<5;q++)printf("impar[%d] = %d\n",q,odd[q]);
        j=0;
        }
        /*if(t==0 && (i>0 || j>0)){
            if(j>0)for(p=0;p<j;p++)printf("par[%d] = %d\n",p,odd[p]);
            if(i>0)for(q=0;q<i;q++)printf("impar[%d] = %d\n",q,even[q]);
        }*/
    }
    for(p=0;p<j;p++)printf("impar[%d] = %d\n",p,odd[p]);
    for(q=0;q<i;q++)printf("par[%d] = %d\n",q,even[q]);
    return 0;
}
